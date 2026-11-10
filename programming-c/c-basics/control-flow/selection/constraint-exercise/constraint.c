#include <stdio.h>
#include <stdbool.h> 

int main(void)
{
    int value = 50;

    // Range [min,max]
    int min = 0;
    int max = 100;;
    
    // TODO 
    if (value < min){
        value = min;
    }
    if(value > max){
        value = max;
    }
    
    printf("%d <= %d <= %d\n", min, value, max);

    return 0;
}
