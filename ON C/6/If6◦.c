/*Гаврюшкин 21ИС-21

If6◦.
Даны два числа. Вывести большее из них
*/
#include <stdio.h>

int main()
{
    float a,b;
    
    scanf ("%f%f", &a , &b);
    
    if (a > b)
    
    printf("%.1f", a);
    
    else 
    
    printf ("%.1f", b);
    
    return 0;

}