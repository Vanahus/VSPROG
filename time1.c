#include <stdio.h>


int main()
{
    // с этого места начинается выполнение программы


    // объявим переменные
    int h;  // часы
    int m;  // минуты


    // прочитаем входные данные
    scanf("%d", &h);
    scanf("%d", &m);


    // объявим переменные для результатов и посчитаем результат
    // по формуле 60h + m,
    // у нас не математика, нужно писать явно знак умножения
    int minres = h * 60 + m;
    printf("%d\n", minres);


    // секунд в 60 раз больше
    int secres = minres * 60;
    printf("%d\n", secres);


    return 0;
}