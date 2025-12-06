#include <stdio.h>

int first(int i)
{
    return i = 5 * i;
}
int second(int i)
{
    return i = 99 - (10 * i) + 10;
}
int third(int i)
{
    return i;
}

int main(void)
{
    int i;

    
    printf("Please enter your number:");
    scanf("%d", &i);
    
    printf("pillar 1 \tpilar 2\t\tpillar 3\n");

    printf("%d\t\t%d\t\t%d", first(i), second(i), third(i));
}
