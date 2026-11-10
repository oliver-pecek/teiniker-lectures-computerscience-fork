#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


void print_binary(uint16_t number); // just use it :-)

int main(void)
{   
    uint16_t value; 
    uint8_t bit;

    // Reads a bit of a number.
    value = 0b0000111100001111;
    bit = 3;
    
    // TODO: bool bit_3 = 
    bool bit_3 = 0;

    unsigned int mask_1 = 1 << 3; // 3 = bit pos

    bit_3 = (value & mask_1) >> 3;

    printf("bit[3] = %d\n", bit_3);

    
    // Sets (writes a 1 to) a bit of a numeric variable.
    value = 0b000011110001111;
    bit = 5;
    
    //TODO: value = 
    unsigned int mask_2 = 1 << bit;
    value = value | mask_2;

    unsigned int mask_3 = ~(1 << 0);
    value = value & mask_3;

    unsigned int mask_4 = 1 << 13;
    value = value ^ mask_4;


    printf("value = ");
    print_binary(value);
    printf("\n");

    return 0;
}

// Helper function (already implemented)
void print_binary(uint16_t number)
{
    for(int i=sizeof(number)*8-1; i>= 0; i--)
    {
        putchar((number & 1 << i) ? '1' : '0');
    }    
    putchar('\n'); // printf("%c", c);
}
