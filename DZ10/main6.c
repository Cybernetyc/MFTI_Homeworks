/* Черкашин Дмитрий.
Домашнее задание №10. Задача 6. Числа в массив.
MFTI_Homeworks DZ10 main6.c
11.04.24
Условие:            В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы.
                    Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив.
                    Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0.
                    Вывести массив по возрастанию в файл .txt.


Данные на входе: 	Строка из английских букв, цифр и знаков препинания
Данные на выходе: 	Последовательность целых чисел отсортированная по возрастанию

Пример
Данные на входе: 	data 48 call 9 read13 blank0a
Данные на выходе: 	0 9 13 48 */

/* Подключение библиотеки стандартного ввода-вывода для работы функций*/
#include <stdio.h>
#include <stdlib.h>

/* *input_fn - указатель на имя файла для чтения input.txt
    тип - char */
char *INPUT_FILE_NAME = "input.txt";

/* *output_fn - указатель на имя файла для чтения input.txt
    тип - char */
char *OUTPUT_FILE_NAME = "output.txt";

/*  Прототип функции inc_data */
int inc_data(char *arr);

/*  Прототип функции number_to_array */
int number_to_array(char *arr, long *arr_var);

/*  Прототип функции out_data */
int out_data(int i, long *arr_var);

#define ARR_WIDTH 1000

/*  main - вход в программу */
int main(void)
{   
    /*  arr - массив хранения входных данных
        тип - char */
    char arr[ARR_WIDTH];

    /*  arr_var - массив записи чисел из входных данных
        тип - long */
    long arr_var[ARR_WIDTH];

    /*  Вызов функции записи входящих данных и
        проверка на работу без ошибок */
    if (inc_data(arr) == 1)
    {
        return 1;
    }
    
    /*  Вызов функции отбора чисел из входящего
        массива данных типа char*/
    int i = number_to_array(arr, arr_var);

    /*  Вызов функции передачи в файл
        обработанных данных, согласно
        условию задачи */
    out_data(i ,arr_var);

    return 0;
}

/*  incoming_data - функция приёма данных из файла
    согласно условия задачи
    Принимает:
    *arr - указатель на массив arr
    Возвращает:
    1 - при ошибке
    0 - при их отсутсвии */
int inc_data(char *arr)
{
    /*  *fp - указатель на файл
        тип - FILE */
    FILE *fp;

    /*  c - переменная для работы с данными из файла
        тип - char */
    char c;

    /*  i - счётчик для работы с массивом
        инициализирован 0
        тип - int */
    int i = 0;

    /*  Проверка на наличие файла input.txt */
    if ((fp = fopen(INPUT_FILE_NAME, "r")) == NULL)
    {
        /* Вывод ошибки из потока ошибок. */
        perror("Error occured while opening input file!");
        /* Вернуть 1 в точку вызова */
        return 1;
    }

    /* Считываем посимвольно пока не конец файла или не перевод строки */
    while (((c = getc(fp)) != EOF) && (c != '\n'))
    {
        /*  Текущему значению массива присвоить считанный символ из файла
            сдвинуть индекс постинкрементом */
            arr[i++] = c;
    }

    /* Закрытие файла */
    fclose(fp);

    /* Вернуть 0 */
    return 0;
}

/*  number_to_array - функция вычленения чисели из массива char.
    Принимает:
    *arr - указатель на массив arr
    *arr_var - указатель на массив arr_var
    Возвращает:
    i - количество чисел во входящем массиве */
int number_to_array(char *arr, long *arr_var)
{   
    /*  *p -  основной указатель на массив arr для перебора 
        тип - char */
    char *p = arr;

    /*  *end - указатель на ячейку после прочтения числа
        из массива arr 
        тип - char */
    char *end = arr;

    /*  а - число, возвращаемое функцией strtol
        тип - long (по определению функции)*/
    long a;

    /*  i - счётчик чисел в массиве 
        тип - int */
    int i = 0;

    /* Пока *p - не нулевое значение - истина */
    while (*p)
    {
        /* Вернуть считанное значение , если число
           либо 0 , если не число 
           Переместить указатель за число
           10 - основание системы счисления */
        a = strtol(p, &end, 10);

        /* Если текущий указатель и указатель за число
           не равно, то произошло считывание числа */
        if (end != p)
        {
            /*  Записать в массив arr_var cчитанное число
                cчётчик увеличить постинкрементом */
            arr_var[i++] = a;

            /* Сместить основной указатель в указатель за числом*/
            p = end;
        }
        else
        {
            /* Сдвинуть основной указатель на 1 */
            p++;
        }
    }

    /*  Вернуть значение количества считанных чисел */
    return i;
}

/*  outgoing_data - функция отправки данных в файл.
    Принимает:
    *arr - указатель на массив arr
    Возвращает:
    1 при ошибке
    0 при их отсуствии */
int out_data(int i, long *arr_var)
{
    /*  *fp - указатель на файл
        тип - FILE */
    FILE *fp;

    /*  Проверка на наличие файла input.txt */
    if ((fp = fopen(OUTPUT_FILE_NAME, "w")) == NULL)
    {
        /* Вывод ошибки из потока ошибок. */
        perror("Error occured while opening output file!");
        /* Вернуть 1 в точку вызова */
        return 1;
    }

    /*  Передача в файл по указателю строки из массива */
    for (int j = 0; j < i ; j++)
    {
        fprintf(fp, "%ld ", arr_var[j]);
    }
    
    /* Закрыть файл */
    fclose(fp);

    /* Вернуть 0 */
    return 0;
}