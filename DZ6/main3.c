/*
Черкашин Дмитрий. 
Домашнее задание №6. Задача 3. Cколько зёрен на доске
MFTI_Homeworks DZ5 main3.c
11.03.24
Условие:            Написать функцию, определяющую кол-во зёрен
                    на N-ной клетке шахмат.
Вход:               Целое число N от 1 до 64
Выход:              Одно число. Кол-во зёрен на данной клетке.
*/

#include <stdio.h>

/* Объявим прототип функции вычисления
количества зёрен на клетках шахмат */ 
long chessCage (int a);

int main (void)
{
    /* Объявим цельночисленную переменную */
    int N;

    /* Предложение ввести число N */
    puts("Please enter the number of chess cage");

WRONG: // Метка для возврата к введению числа 

    /* Считывание значеня переменной N функцией scanf */
    scanf("%d",&N);

    /* Ecли введёное число не отвечает условия, просьба
     ввести число заново*/
    if ( N<1 || N>64 )
    {
        puts("ERROR! Please, enter a value from 1 to 64");
        goto WRONG;
    }
    
    /* Вывод на экран значения кол-ва зерён на данной клетке шахмат. 
    Аргумент в функцию printf передаёт функция сhessCage*/
    printf("The number of grains\nin a chessboard cell № %d is %ld\n", N, chessCage(N));
    
    return 0;
}

/* Функция chessCage принимаемы значения типа int,
 возвращаемые типа int. */
long chessCage (int a)
{
    /* Объявим и инициализируем 
    переменную summ типа int */
    long grains = 1;

    /* Посчитаем сумму чисел от 1 до N */
    for (char i=1; i<a; i++)
    {
        grains*=2;
    }
 
    // Вернуть вычисленное значение
    return grains;
}