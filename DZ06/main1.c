/*
Черкашин Дмитрий. 
Домашнее задание №6. Задача 1. Среднее арифметическое чисел
MFTI_Homeworks DZ6 main1.c
11.03.24
Условие:            Написать функцию, которая возвращает среднее арифметическое
                    двух переданных ей аргументов (параметров).
Вход:               Два целых неотрицательных числа
Выход:              Одно целое число
*/

#include <stdio.h>

/* Объявим прототип функции 
вычисления среднеарифметического*/ 
float middle (int a, int b);

int main (void)
{
    /* Объявим цельночисленные переменные */
    int a, b;

    /* Предложение ввести числа А и В разделённые пробелом*/
    puts("Please enter the numbers A and B separated by space");

    /* Считывание значений чисел А и B в переменные а и b
    функцией scanf*/
    scanf("%d%d", &a, &b);

    /* Вывод на экран значения среденого арифметического двух введёных чисел
    как требует условие. Аргумент в функцию printf передаёт функция middle*/
    printf("Middle = %.2f\n",middle(a,b));
    
    return 0;

}

/* Функция middle. принимаемы значения типа int,
 возвращаемые типа float. */
float middle (int a, int b)
{
    /* Объявим и инициализируем 
    переменную middle типа float*/
    float middle = 0;

    /* Вычисление значения среднего арифметического
    с явным преобразованием к типу float*/
    middle=(a+b)/2.0; 

    // Вернуть вычисленное значение
    return middle;
}