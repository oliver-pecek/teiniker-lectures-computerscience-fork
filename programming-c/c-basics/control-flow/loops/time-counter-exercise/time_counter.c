#include <stdio.h>

int main(void)
{
    // initial values
    //int sec = 0;
    //int min = 0;
    //int hours = 0;

    for (int hours_iter = 0; hours_iter < 24; hours_iter++)
    {
        for (int min_iter = 0; min_iter < 60; min_iter++)
        {
            for (int sec_iter = 0; sec_iter < 60; sec_iter++)
            {
                printf("%2d:%02d:%02d\n", hours_iter, min_iter, sec_iter);
            }
        }
    }

    return 0;
}
