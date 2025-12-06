//AGMET FARUK ELAS

#include <stdio.h>

int main(void)
{
    int number[10];
    int a;
    int final = 0;

    printf("Please enter 10 integer\n");
    for(a = 0; a < 10; a++)
    {
        scanf("%d", &number[a]);
    }
    
    for(int sum = 0; sum <= 9; sum++)
    {
        final += number[sum];
    }
    double avarage = (double)final / a;
    printf("their sum is %d \n", final);
    printf("their avarage is %.2lf", avarage);
}
