\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Лабораторная 12, задание 4
// Перемещение по массиву с помощью указателя

int main()
{
    setlocale(LC_ALL, "Rus");
    float array[10] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f, 11.0f };
    float *ptr_a;
    int i;

    // 4.1 имя массива - это адрес его первого элемента
    printf("4.1\n");
    printf("array     = %p\n", (void*)array);
    printf("&array[0] = %p\n", (void*)&array[0]);
    printf("&array    = %p\n", (void*)&array);
    printf("Все три адреса одинаковые.\n\n");

    // 4.2 указатель на начало массива и операции
    printf("4.2\n");
    ptr_a = array;
    printf("начало: ptr_a=%p, *ptr_a=%g\n", (void*)ptr_a, *ptr_a);
    ptr_a++;
    printf("ptr_a++: ptr_a=%p, *ptr_a=%g\n", (void*)ptr_a, *ptr_a);
    ptr_a = ptr_a + 4;
    printf("ptr_a+4: ptr_a=%p, *ptr_a=%g\n", (void*)ptr_a, *ptr_a);
    ptr_a = ptr_a - 2;
    printf("ptr_a-2: ptr_a=%p, *ptr_a=%g\n\n", (void*)ptr_a, *ptr_a);

    // 4.3 проход по массиву в прямом порядке с шагом 2
    printf("4.3\n");
    ptr_a = array;
    for (i = 0; i < 10; i = i + 2)
    {
        printf("ptr_a=%p, *ptr_a=%g\n", (void*)ptr_a, *ptr_a);
        ptr_a = ptr_a + 2;
    }
    printf("\n");

    // 4.4 проход в обратном порядке: указатель на конец массива и декремент
    printf("4.4\n");
    ptr_a = array + 9;
    for (i = 0; i < 10; i++)
    {
        printf("ptr_a=%p, *ptr_a=%g\n", (void*)ptr_a, *ptr_a);
        if (i < 9)
            ptr_a--;
    }

    return 0;
}
