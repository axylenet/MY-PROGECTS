/*Гаврюшкин 21ИС-21

For6.
Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
1.4, . . . , 2 кг конфет.

*/
#include <stdio.h>

int main()
{
   float a; 
   
   scanf ("%f", &a);
   
    for  (float mass = 1.2; mass < 2.1;  mass += 0.2)
    
        printf("%.2f кг. %.2f руб.\n ",mass ,mass * a);
        
    return 0;

}