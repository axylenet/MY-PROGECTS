/*Гаврюшкин 21ИС-21

Begin4◦. 
Дан диаметр окружности d. Найти ее длину L = π·d. В качестве
значения π использовать 3.14.

*/

#include <stdio.h>

int main()
{
    float p;
    p =3.14;
    float d;
    scanf("%f",&d);
    float l=(p*d);
    printf("l=%.2f\n",l);
    return 0;
}
