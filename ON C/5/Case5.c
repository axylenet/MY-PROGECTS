/*

Case5. Арифметические действия над числами пронумерованы следующим
образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление. Дан
номер действия N (целое число в диапазоне 1–4) и вещественные числа A
и B (В не равно 0). Выполнить над числами указанное действие и вывести
результат.


*/
#include <stdio.h>
 
int main()
{
   int n;
   float a,b;
   
   scanf ("%d%f%f", &n, &a,&b);
 
   switch (n) {
       
   case 1:
       printf("%f\n",a + b) ;
       break;
       
   case 2:
       printf("%f\n",a - b) ;
       break;
       
   case 3:
       printf("%f\n",a * b) ;
       break;
       
   case 4:
       printf("%f", a / b) ;
       break;
   }
   return 0;
}
