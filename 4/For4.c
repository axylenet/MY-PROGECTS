//For4. Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1, 2, …, 10 кг конфет.
//Гаврюшкин 21ИС-21

#include <stdio.h>

int main()
{
    float a;
    scanf("%f", &a);
    for (int i=1; i<11; i++)
    {
    printf("цена за %d кг = %.2f\n",i, a*i);
    }
    return 0;
}
