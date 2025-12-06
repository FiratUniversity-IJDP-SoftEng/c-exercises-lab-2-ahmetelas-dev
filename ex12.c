//AHMET FARUK ELAS

#include <stdio.h>

int main(void)
{
    int a;
    int final = 1;
    printf("enter a intager to calculate Factorial: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        final *= i;
    }

    printf("%d! = %d", a, final);
}
