/*Гаврюшкин 21ИС-21

Series6. 
Дано целое число N и набор из N положительных вещественных
чисел. Вывести в том же порядке дробные части всех чисел из 
данного набора (как вещественные числа с нулевой целой частью), а также
произведение всех дробных частей.

*/
#include <stdio.h>
 
int main()
{
    float a; 
    float p = 1;
    int i, n;
    
    printf("Набор чисел вводимых: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; ++i)
    {
        printf("%d) ", i);
        
        scanf("%f", &a);
        
        printf("%f\n",a - (float)((int)a));
        
        p*=a-(float)((int)a);
    }
    
    printf("%f\n",p);
    
    return 0;
}