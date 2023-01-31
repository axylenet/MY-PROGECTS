
//While4°. Дано целое число N (> 0). Если оно является степенью числа 3, то вывести true, если не является — вывести false.
//Гаврюшкин 21ИС-21

#include <stdio.h>
#include <math.h>

int main()
{
 int n, i=0, a=1;
 scanf("%d", &n);
 while (a <=n)
 {
 i++;
 a = pow(3,i);
 if (a==n) {
 printf("true");
 break;
 }
 else if (a != n && a>=n )
 printf("false");

 }
 
 return 0;
}