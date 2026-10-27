#include <stdio.h>

int main(void)
{
    short i = 1;
    int j = -999;
    unsigned long k = 123L;
    unsigned int h = 0xffd2;
    unsigned int o = 01234;

    printf("\t+---------------+-----------+\n");
    printf("\t|  short        |  %d       |\n", i);
    printf("\t|  int          |  %7d |\n", j);
    printf("\t|  unsigned long|  %07ld |\n", k);
    printf("\t+---------------+-----------+\n");
    printf("\t|  hex          |  %07x |\n", h);
    printf("\t|  octal        |  %7o |\n", o);
    printf("\t+---------------+-----------+\n");
    return 0;
}
