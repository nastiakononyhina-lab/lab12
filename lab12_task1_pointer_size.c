\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Лабораторная 12, задание 1
// Объём памяти, выделяемой под указатель на char, int, double

int main()
{
    setlocale(LC_ALL, "Rus");
    char *pc, c = 'a';
    int *pi, i = 5;
    double *pd, d = 2.5;

    pc = &c;
    pi = &i;
    pd = &d;

    printf("Размер указателя на char   = %zu байт\n", sizeof(pc));
    printf("Размер указателя на int    = %zu байт\n", sizeof(pi));
    printf("Размер указателя на double = %zu байт\n", sizeof(pd));

    // Вывод: размер указателя одинаковый для всех типов, потому что в указателе
    // хранится адрес, а размер адреса зависит от системы (4 байта в x86, 8 в x64),
    // а не от типа данных. Тип нужен, чтобы знать, сколько байт занимает
    // значение по этому адресу.

    return 0;
}
