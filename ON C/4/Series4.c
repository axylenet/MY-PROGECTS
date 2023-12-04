/*Гаврюшкин 21ИС-21

Series4. 
Дано целое число N и набор из N вещественных чисел. Вывести
сумму и произведение чисел из данного набора.

*/
#include <stdio.h>
 
int main()
{
    float r;
    float s = 0, p = 1;
    int i;
    
    for (i=1; i<=10; ++i)
    {
        printf("%d:",i);
        scanf("%f", &r);
        
        s = s + r;
        
        p = p * r;
    }
    printf("%f\n%f\n",s,p);
    return 0;
}