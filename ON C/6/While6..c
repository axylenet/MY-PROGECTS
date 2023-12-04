/*Гаврюшкин 21ИС-21

While6.
Дано целое число N (> 0). Найти двойной факториал N:
N!! = N·(N−2)·(N−4)·. . .
(последний сомножитель равен 2, если N — четное, и 1, если N — нечетное). Чтобы избежать целочисленного переполнения, 
вычислять это произведение с помощью вещественной переменной и вывести его как вещественное число.
*/
#include <stdio.h>

int main()
{
    int n;
    float a = 1;
    
    scanf ("%d", &n);
    
    while (n >= 2)
    {
        a = a * n;
        n = n - 2;
    }
    
   printf("%.1f\n", a);
   
   return 0;
}