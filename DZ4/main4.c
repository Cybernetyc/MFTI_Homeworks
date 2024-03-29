/*
Черкашин Дмитрий. 
Домашнее задание №4. Задача 4.
MFTI_Homeworks DZ4 main4.c
04.03.24
Условие:            Напечатать сумму максимума и минимума
                    
Вход:               Пять целых чисел через пробел
Выход:              Одно целое число - сумма максимума и минимума
*/

#include <stdio.h>

int main (void)
{
    /* Явно объявим и инициализируем 7 цельночисленных знаковых переменных*/
    signed int a=0, b=0, c=0, d=0, e=0, max=0;
    
    /* Предложение ввести значение пяти чисел разделённых пробелом */
    printf("Please enter the five numbers separated by space\n");

    /* Считаем с клавиатуры значение трёх чисел функцией scanf*/
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    /* при помощи последовательности тернарных операторов найдем максимальное число*/
    max = a>b ? a : b;
    max = max > c ? max : c;
    max = max > d ? max : d;
    max = max > e ? max : e;

    /* при помощи последовательности тернарных операторов найдем минимальное число*/
    a = a<b ? a : b;
    a = a<c ? a : c;
    a = a<d ? a : d;
    a = a<e ? a : e;

    /* Отадём в функцию printf аргумент в виде cуммы минимального и максимального числа числа */
    printf("%d \n",max + a);

    return 0;
}