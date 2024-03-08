/*
Черкашин Дмитрий. 
Домашнее задание №5. Задача 1.
MFTI_Homeworks DZ5 main1.c
08.03.24
Условие:            Сумма квадратов маленьких чисел
                    Ввести 2 числа a и b ( a <= b )
                    Вывести cумму квадратов всех чисел от а до b
Вход:               Два целых числа по модулю не больше 100
Выход:              Сумма квадратов от первого введёного числа до второго
*/

#include <stdio.h>

int main (void)
{
    /* Объявим 3 цельночисленные беззнаковые переменные
    a, b, summ, типа int. summ сразу инициализируем чтобы избавиться от мусора*/
    int a, b, summ=0;
    
    /* Предложение ввести значение чисел разделённых пробелом */
    printf("Please enter the numbers A and B separated by space\n");

    /* Считаем с клавиатуры значение чисел функцией scanf*/
    scanf("%d%d", &a, &b);
WRONG:
    /*Проверим верность вводимых данных ,если а > b,
     то вывод предупреждения и необходимости корректного ввода*/
    if (a>b)
    {   
        printf("A > B , Please enter the A<=B\n");
        scanf("%d%d", &a, &b);
        // Переход по метке неверного ввода, и проход по телу функции main заново
        goto WRONG; 
    }
    else
    /* Если ввод верный то считаем сумму квадратов чисел от а к b 
    пока а не станет больше b*/
    {
        while (a<=b)
        {
            summ += a*a;
            a++;
        }   
    }
    // Вывод значение переменной summ,
    // в которую записывали сумму квадратов чисел от a к b 
    printf("summ = %d\n", summ);

    return 0;
}