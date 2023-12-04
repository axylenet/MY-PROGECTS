/*

If5. Даны три целых числа. Найти количество положительных и количество
отрицательных чисел в исходном наборе.

*/
#include <stdio.h>
 
int main()
{
   int a, b, c;
   int cc1, cc2;
   
   cc1=cc2=0;
   
   scanf ("%d%d%d", &a, &b,&c);
  
   if (a > 0)
   
   cc1 = cc1 + 1;
   
   if (a < 0)
   
   cc2 = cc2 + 1;
 
   if (b > 0) 
   
   cc1 = cc1 + 1;
   
   if (b < 0) 
   
   cc2 = cc2 + 1;
 
   if (c > 0)
   
   cc1 = cc1 + 1;
   
   if (c < 0) 
   
   cc2 = cc2 + 1;
 
 
    printf(" 'Положительных': %d\n 'Отрицательных': %d",cc1, cc2);
    
    return 0;
}