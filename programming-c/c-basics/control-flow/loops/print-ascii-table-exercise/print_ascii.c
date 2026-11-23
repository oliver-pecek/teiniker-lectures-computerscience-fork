#include <stdio.h>

int main(void)
{
    printf("\t+-----+-------+-------+------+\n");
    printf("\t| char|  Dec  |  Hex  |  Oct |\n");
    printf("\t+-----+-------+-------+------+\n");
    int lower_bound = 32;
    int higher_bound = 126;

    for (int i = lower_bound; i <= higher_bound; i++)
    {
        printf("\t| '%c' | %4d  | 0x%x  |%4o  |\n", i, i, i, i);
    }

    return 0;
}
