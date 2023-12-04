/*

For5◦
. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
0.2, . . . , 1 кг конфет.

*/
#include <stdio.h>

int main()
{
    float n;
    
    scanf("%f", &n);
    
    for (float mass = 0.1 ; mass < 1.1; mass = mass + 0.1 )
       
        printf("%f кг = %f руб.\n", mass, mass*n);
    
   
    return 0;
}
