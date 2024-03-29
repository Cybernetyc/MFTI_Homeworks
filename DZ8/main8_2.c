/*Черкашин Дмитрий. 
Домашнее задание №8. Задача 8_2. Cдвиг массива вправо на 4. Реверсами 
MFTI_Homeworks DZ8 main8_2.c
26.03.24
Условие:            Считать массив из 12 элементов.
                    Выполнить реверсивный сдвиг ВПРАВО на 4 элемента
Вход:               12 целых элементов массива через пробел
Выход:              12 целых элементов массива через пробел сдвунтых на 4 элементa реверсивно*/

#include <stdio.h>  // Подключим стандартную библиотеку ввода вывода
#define VAL_ARR 12  // Объявим константу длины массива VALUE_ARR
#define VAL_SLIDE 4 // Объявим константу длины сдвига массива VALUE_SLIDE

void ArrInput (int *arr, int n);    // Объявление прототипа функции инициализации
void ArrOutput (int *arr, int n);   // Объявление прототипа функции вывода массива
void ArrReverse (int *arr, int n);  // Объявление прототипа функции реверса массива

int main (void)
{ 
    /* Объявим переменную и массив типа int */
    int arr[VAL_ARR];

    /* Вывов функции инициализации массива */
    ArrInput(arr, VAL_ARR);
    
    /* Вызов функции реверса левой части массива.
    Общая длина массив минус число сдвига*/
    ArrReverse(arr, (VAL_ARR-VAL_SLIDE)); 

    /* Инвертируем оставшуюся правую часть массива */
    ArrReverse(arr + (VAL_ARR-VAL_SLIDE), VAL_SLIDE);

    /* Сделаем полную инверсию массива для получения заданного*/
    ArrReverse(arr, VAL_ARR);
    
    /* Функцией ArrOuptut произведём вывод конечного значения изменёного массива*/
    ArrOutput(arr, VAL_ARR);

    return 0;
}

/* Функция ArrInput инициализации массива 
Принимает: 
1)Указатель на массив 
2)Переменную n типа int - длину массива
Ничего не возвращает*/
void ArrInput(int *arr, int n)
{
    printf("Please enter the value of %d elements of array"
    "separated by space:\n", n);
    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return;
}

/* Функция ArrReverse для реверса значений в массиве
Принимает:
1) Указатель на массив 
2) Переменную типа int - длину массива
Ничего не возвращает */
void ArrReverse(int *arr, int n)
{
    /* Используем промежуточную переменную
    для хранения значения для переноса */
    int var;

    for (int i=0, j=n-1; i<j; i++, j--)
    {
        var = arr[i];
        arr[i]=arr[j];
        arr[j]=var;
    }
}

/* Функция ArrOutput для вывода значений в массиве
Принимает:
1) Указатель на массив 
2) Переменную типа int - длину массива
Возвращает:
1) Выводит поэлементно значение массива. Ничего не возвращает */
void ArrOutput (int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}