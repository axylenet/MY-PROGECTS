// If4.Даны три целых числа. Найти количество положительных чисел в исходном наборе.
//Гаврюшкин 21ИС-21

#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    if (a>0 && b>0 && c>0)
    printf("3");
    else if (a>0 && b>0 || a>0 && c>0 || b>0 && c>0)
    printf("2");
    else if (a>0 || b>0 || c>0)
    printf("1");
    else 
    printf("0");
    return 0;
}
