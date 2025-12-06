//AHMET FARUK ELAS

#include <stdio.h>

int fibo(int n) 
{
    
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibo(n - 1) + fibo(n - 2);
}

int main(void) 
{
    int n, i;

    printf("Enter a number:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("%d ", fibo(i));
    }
}
