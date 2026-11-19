\xef\xbb\xbf#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Лабораторная 12, задание 3
// На сколько байт смещается указатель после pa++ и pa--
// для типов int, double, char, long double, short unsigned int, _Bool.
// Указатель сначала инициализируем адресом переменной (&).

int main()
{
    setlocale(LC_ALL, "Rus");

    // ---------- int ----------
    int *pa, x = 5;
    pa = &x;
    printf("int: по адресу %p хранится *pa=%g\n", (void*)pa, (double)*pa);
    pa++;
    printf("int: после pa++ адрес %p (сдвиг %d байт)\n", (void*)pa, (int)((char*)pa - (char*)&x));
    pa--;
    printf("int: после pa-- адрес %p, *pa=%g\n\n", (void*)pa, (double)*pa);

    // ---------- double ----------
    double *pd, xd = 5;
    pd = &xd;
    printf("double: адрес %p\n", (void*)pd);
    pd++;
    printf("double: после pd++ адрес %p (сдвиг %d байт)\n", (void*)pd, (int)((char*)pd - (char*)&xd));
    pd--;
    printf("double: после pd-- адрес %p\n\n", (void*)pd);

    // ---------- char ----------
    char *pc, xc = 'a';
    pc = &xc;
    printf("char: адрес %p\n", (void*)pc);
    pc++;
    printf("char: после pc++ адрес %p (сдвиг %d байт)\n", (void*)pc, (int)(pc - &xc));
    pc--;
    printf("char: после pc-- адрес %p\n\n", (void*)pc);

    // ---------- long double ----------
    long double *pl, xl = 5;
    pl = &xl;
    printf("long double: адрес %p\n", (void*)pl);
    pl++;
    printf("long double: после pl++ адрес %p (сдвиг %d байт)\n", (void*)pl, (int)((char*)pl - (char*)&xl));
    pl--;
    printf("long double: после pl-- адрес %p\n\n", (void*)pl);

    // ---------- short unsigned int ----------
    short unsigned int *ps, xs = 5;
    ps = &xs;
    printf("short unsigned int: адрес %p\n", (void*)ps);
    ps++;
    printf("short unsigned int: после ps++ адрес %p (сдвиг %d байт)\n", (void*)ps, (int)((char*)ps - (char*)&xs));
    ps--;
    printf("short unsigned int: после ps-- адрес %p\n\n", (void*)ps);

    // ---------- _Bool ----------
    _Bool *pb, xb = 1;
    pb = &xb;
    printf("_Bool: адрес %p\n", (void*)pb);
    pb++;
    printf("_Bool: после pb++ адрес %p (сдвиг %d байт)\n", (void*)pb, (int)((char*)pb - (char*)&xb));
    pb--;
    printf("_Bool: после pb-- адрес %p\n", (void*)pb);

    // Вывод: указатель при ++ и -- сдвигается на размер своего типа:
    // char и _Bool - на 1 байт, short - на 2, int - на 4, double - на 8,
    // long double - на 8 или 16 (зависит от компилятора).

    return 0;
}
