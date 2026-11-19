\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Лабораторная 12, домашнее задание ***, вариант 11: signed int
// Определить размер типа в байтах БЕЗ sizeof и констант из limits.h / float.h.
// Способ 1: разность адресов двух соседних элементов массива.
// Способ 2: считаем биты сдвигами (проверка).

int main()
{
    setlocale(LC_ALL, "Rus");
    signed int arr[2];
    int size;

    // способ 1: приводим адреса к char*, тогда разность - это число байт
    size = (char*)&arr[1] - (char*)&arr[0];
    printf("Размер signed int (по адресам) = %d байт\n", size);

    // способ 2: сдвигаем единицу влево, пока она не пропадёт, считаем биты
    unsigned int one = 1;
    int bits = 0;
    while (one != 0)
    {
        one = one << 1;
        bits++;
    }
    printf("Размер signed int (по битам) = %d бит = %d байт\n", bits, bits / 8);

    return 0;
}
