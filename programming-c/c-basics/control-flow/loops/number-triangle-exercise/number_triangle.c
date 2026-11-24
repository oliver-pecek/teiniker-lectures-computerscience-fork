#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t no_of_lines=5;

    //TODO program nested loops
    for(int i = 0; i <= no_of_lines; i++){
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }

    return 0;
}