/*
Черкашин Дмитрий. 
Домашнее задание №4. Задача 1.
MFTI_Homeworks DZ4 main1.c
02.03.24
Условие:            Ввести два числа
                    Вывести в порядке возрастания
Вход:               Два целых числа
Выход:              Два числа в порядке возрастания
*/

#include <stdio.h>

int main (void)
{
    /* Явно объявим и инициализируем 2 цельночисленные знаковые переменные */
    signed int a=0, b=0;
    
    /* Предложение ввести значение чисел разделённых пробелом */
    printf("Please enter the numbers separated by space\n");

    /* Считаем с клавиатуры значение чисел функцией scanf*/
    scanf("%d%d", &a, &b);

    /* при помощи тернарного оператора составили краткое условие
    аргументом функции f, является результат работы тернарного оператора*/ 
    printf("%d ", a>b ? a : b );
    
    /* Аналогично, с отзеркаленнымы выражениями*/
    printf("%d\n", a>b ? b : a );

    return 0;
}