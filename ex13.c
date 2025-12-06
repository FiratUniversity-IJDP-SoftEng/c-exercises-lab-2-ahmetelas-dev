//AHMET FARUK ELAS

#include <stdio.h>

int fac(int n)
{
    
    if (n <= 1)
    {
        return 1;
    }
    
    else
    {
        return n * fac(n - 1);
    }
}

int main(void)
{
    int a;

    printf("Enter an integer to calculate Factorial: ");
    scanf("%d", &a);

    printf("%d! = %d\n", a, fac(a)); 

    return 0;
}
