/*

While5. Дано целое число N (> 0), являющееся некоторой степенью числа 2:
N = 2K. Найти целое число K — показатель этой степени

*/
#include <stdio.h>

int main()
{
    int n;
    int k;
    int i;
    
    scanf("%d", &n);
    
    k = 0;
    
    while (n != 1)
    {
    
    n = n / 2;
    
    k = k + 1;
    
    }
    
    printf("%d", k);
    
    return 0;
}
