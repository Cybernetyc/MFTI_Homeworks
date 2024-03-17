/* Черкашин Дмитрий. 
Домашнее задание №7. Задача 3. От А до B
MFTI_Homeworks DZ7 main3.c
17.03.24
Условие:            Вывести все числа от А до B включительно,
                    рекурсивно, в порядке возрастания, если А < B
                    в порядке убывания если А > B
Вход:               Два целых числа через пробел
Выход:              Последовательность целых чисел */

#include <stdio.h> // Подключим стандартную библиотеку ввода вывода


void funct_a_b(int a, int b); // Объявим проптотип рекурсивной функции 
  
int main()
{
    /* Объявим цельночисленные A и B типа int*/
    int a, b;

    /* Приглашение ввести число для обратного вывода*/
    puts("Please enter the value A and B separated be space:");
    
    /* Ввод значение A и B функцией scanf*/
    scanf("%d%d", &a, &b);

    /* Вызов рекурсивной функции обратного вывода*/
    funct_a_b(a, b);

    return 0;
}

/* Функция funct_a_b принимает 
2 значения типа int. Ничего не возвращает */
void funct_a_b(int a, int b) 
{   
    /* 1 случай. Если А меньше B*/
    if(a<b)
    {
        /* Вывести текущее значение числа а*/
        printf("%d ",a);

        /* Прибавить к A еденицу и
        вызвать функцию рекурсивно*/
        funct_a_b(++a, b);
    }

    /* 2 случай. Если А меньше B*/
    else if (a>b)
    {
        /* Вывести текущее значение числа а*/
        printf("%d ",a);

        /* Отнять из A еденицу и
        вызвать функцию рекурсивно*/
        funct_a_b(--a, b);
    }

    /* Дополнительный вывод числа А, 
    когда строгие условия не выполняются,
    выводим крайнее значение числа после
    инкремента или декремента, чтобы не потерять значение*/
    else
    {
        printf("%d\n", a);
    }
}