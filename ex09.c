// AHMET FARUK ELAS

#include <stdio.h>

int main() 
{
    int num;
    int count = 0;
    int sum = 0;
    float average = 0.0;

    printf("enter numbers (enter -1 to stop):\n");

    while (1) 
    {
        scanf("%d", &num);

        if (num == -1) 
        {
            break;
        }

        sum += num;
        count++;
    }

    if (count > 0) 
    {
        average = (float)sum / count; 
        
        printf("count: %d\n", count);
        printf("sum: %d\n", sum);
        printf("average: %.2f\n", average);
    } 

    else 
    {
        printf("pelase enter valid numbers\n");
    }

    return 0;
}
