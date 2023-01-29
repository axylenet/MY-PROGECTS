/*

Boolean5◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Справедливы неравенства A ≥ 0 или B < −2».

*/
#include <stdio.h>

int main ()
{
  int a, b;

  scanf ("%d%d", &a, &b);

  if (a >= 0 || b < -2)
  
  printf("TRUE");
   
  else
  
  printf("FALSE");
  
    return 0;
}
