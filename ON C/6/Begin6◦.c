/*Гаврюшкин 21ИС-21

Begin6◦
. Даны длины ребер a, b, c прямоугольного параллелепипеда. Найти
его объем V = a·b·c и площадь поверхности S = 2·(a·b + b·c + a·c).

*/
#include <stdio.h>

int main()
{
    float a,b,c, v, s;
    
    scanf("%f %f %f", &a, &b , &c);
    
    v = a*b*c;
    s = 2*(a*b+b*c+a*c);
    
    printf ("V:%.1f S:%.1f",v ,s );
    
    return 0;
}