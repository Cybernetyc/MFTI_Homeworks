/* Черкашин Дмитрий. 
Домашнее задание №7. Задача 5_2. Точная степень двойки (простой метод)
MFTI_Homeworks DZ7 main5_2.c
17.03.24
Условие:            Дано натуральное число N,
                    Определить ялвяется ли число точной степенью двойки
Вход:               Натуральное число
Выход:              YES или NO  */

#include <stdio.h>  // Подключим стандартную библиотеку ввода вывода
 
int get_bin(int n);  // Объявим проптотип рекурсивной функции 

int main(void)
{
    /* Объявим цельночисленну N типа int*/
    int n;

    /* Приглашение ввести число*/
    puts("Please enter the value N:");
    
    /* Ввод значение N функцией scanf*/
    scanf("%d", &n);

    
    /* Вывод полеченных значение функцией printf
    в качестве аргумента - возвращаемое тернарным оператором значение */
    printf("\n%s\n", (n & (n-1)) ==0 ? "YES" : "NO");

    return 0;
}
    /* Так как натурально числое, являющеяся степенью двойки
    в двоичном виде всегда содержит только одну <<1>> в записи,
    то побитовое произведение числа, являющегося степенью двойки
    на предыдущее число всегда даст нуль.
    Например:  256 = 0b 1 0000 0000 
               255 = 0b 0 1111 1111 */