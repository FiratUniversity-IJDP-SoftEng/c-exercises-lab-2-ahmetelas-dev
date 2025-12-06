// AHMET FARUK ELAS

#include <stdio.h>

int main(void) 
{
    
    int number[30];
    int index = 0; 

    printf("number\n");

    for (int i = 100; i >= 50; i--) 
    {
        
        if (i % 3 == 0) 
        {
            
            number[index] = i;
        
            index++;
            
            if (index >= 30) 
            {
                break; 
            }
        }
    }
    
    int sum = index;

    printf("\nElements within the arrays\n");
    
    for (int j = 0; j < sum; j++) {
        
        printf("Dizi[%d]: %d\n", j, number[j]);
    }

    return 0;
}
