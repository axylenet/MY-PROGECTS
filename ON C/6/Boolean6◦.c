/*Гаврюшкин 21ИС-21

Boolean6◦. 
Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».

*/
#include <stdio.h>

int main()
{
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b && b < c)
    
    printf ("1");
    
    else
    
    printf ("0");
    
    return 0;
    

}