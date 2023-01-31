/*Гаврюшкин 21ИС-21

Case4◦.
Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 —
февраль и т. д.). Определить количество дней в этом месяце для невисокосного года.

*/
#include <stdio.h>
 
int main()
{
   int m;
   scanf ("%i", &m);
 
   switch (m)
   {
   case 1:
   
   case 3:
   
   case 5:
   
   case 7:
   
   case 8:
   
   case 10:
   
   case 12:
       printf("В месяце 31 днень.\n") ;
       break;
       
   case 4:
   
   case 6:
   
   case 9:
   
   case 11:
   
       printf("В месяце 30 дней.\n") ;
       break;
       
   case 2:
       printf("В месяце 28 дней.\n") ;
       break;
       
   }
   
   return 0;
}