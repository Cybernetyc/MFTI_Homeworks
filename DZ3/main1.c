/*
Черкашин Дмитрий. 
Домашнее задание №3. Задача 1.
MFTI_Homeworks DZ3 main1.c
02.03.24
Условие:            Ввести три числа, найти их сумму.
                    Hапечатать сумму трех чисел.
Вход:               Три целых числа через пробел
Выход:              Строка вида %d+%d+%d=%d
*/
#include <stdio.h>

int main (void)
{
    signed int a=0, b=0, c=0, summ=0;
    //Явно объявим 4 знаковые переменные типа int

    printf("Please enter the three numbers separated by spaces\n");
    //Вывод предложения ввеcти значение чисел через пробел

    scanf("%d%d%d", &a, &b, &c);
    //Считаем с клавиатуры значения чисел функцией scanf через пробел

    summ=a+b+c;
    //Присвоим переменной summ сумму трёх введёных чисел

    printf("%d+%d+%d=%d\n", a,b,c,summ);
    //Вывод строки вида согласно условия задачи

    return 0;
}