/*Черкашин Дмитрий. 
Домашнее задание №8. Задача 3. Максимум и минимум.
MFTI_Homeworks DZ8 main3.c
24.03.24
Условие:            Считать массив из 10 элементов
                    и найти в нём минимальный и максимальный
                    и найти их номера
Вход:               10 целых чисел через пробел
Выход:              4 целых числа через пробел:
                    1) Значение максимума
                    2) Номер позиции максимума
                    3) Значение минимума
                    4) Номер позиции минимума*/

#include <stdio.h>  // Подключим стандартную библиотеку ввода вывода
#define VAL_ARR 10  // Объявим константу длины массива VAL_ARR

void ArrInput (int *arr, int n); // Объявим прототип функции ввода массива
int ArrMax(int *arr, int n);     // Объявление прототипа функции нахождения максимального элемента
int ArrMaxPos (int *arr, int n); // Объявление прототипа функции нахождения позиции максимального элемента
int ArrMin(int *arr, int n);     // Объявление прототипа функции нахождения минимального элемента
int ArrMinPos(int *arr, int n);  // Объявление прототипа функции нахождения позиции минимального элемента

int main (void)
{ 
    /* Объявим переменную и массив типа int */
    int arr[VAL_ARR];

    /* Вывов функции инициализации массива */
    ArrInput(arr, VAL_ARR);
    
    /* Вывод максимального значение в массиве */
    printf("ArrMax = %d\n", ArrMax(arr, VAL_ARR));

    /* Вывод позиции максимального значения в массиве */
    printf("ArrMaxPos = %d\n", ArrMaxPos(arr, VAL_ARR));

    /* Вывод минимального значения в массиве */
    printf("ArrMin = %d\n", ArrMin(arr, VAL_ARR));

    /* Вывод позиции минимального значения в массиве */
    printf("ArrMinPos = %d\n", ArrMinPos(arr, VAL_ARR));

    return 0;
}

/* Функция инициализации массива 
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

/* Функция ArrMax нахождения максимального элемента в массиве 
Принимает:
1) Указатель на массив 
2) Переменную типа int - длину массива
Возвращает:
1) Максимальное значение в массиве */
int ArrMax(int *arr, int n)
{
    
    int max = arr[0];
    for (int i=0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

/* Функция ArrMaxPos нахождения позиции максимального элемента в массиве 
Принимает:
1)Указатель на массив 
2) Переменную типа int - длину массива
Возвращает:
1) Позицию максимального элемента */
int ArrMaxPos(int *arr, int n)
{
    int max = arr[0], pos_max=1;
    for (int i=0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            pos_max = i+1;
        }
    }
    return pos_max;
}

/* Функция нахождения минимального элемента в функции ArrMin
Принимает:
1) Указатель на массив 
2) Переменную типа int - длину массива
Возвращает:
1) Минимальное значение в массиве */
int ArrMin(int *arr, int n)
{
    
    int min = arr[0];
    for (int i=0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

/* Функция нахождения позиции минимального элемента в массиве Arr
Принимает:
1) Указатель на массив 
2) Переменную типа int - длину массива
Возвращает:
1) Значение позиции минимального элемента в массиве */
int ArrMinPos(int *arr, int n)
{
    
    int min = arr[0], min_pos=1;
    for (int i=0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_pos = i+1;
        }
    }
    return min_pos;
}