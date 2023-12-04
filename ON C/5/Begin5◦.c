/*

Begin5◦
. Дана длина ребра куба a. Найти объем куба V = a
3 и площадь его
поверхности S = 6·a^2.

*/
#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);
    
    printf("V:%d\n", a*a*a);
    
    printf("S:%d", (a*a)*6);
    
    return 0;
}
