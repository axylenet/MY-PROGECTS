// Boolean4°. Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3».
//Гаврюшкин 21ИС-21

#include <stdio.h>

int main()
{
    float a,b;
    scanf("%f %f", &a, &b);
    if (a>2 && b<=3)
    printf("TRUE");
    else 
    printf("FALSE");
    return 0;
}