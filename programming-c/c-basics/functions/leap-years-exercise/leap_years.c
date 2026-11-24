#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int yyyy)
{
    bool is_leap_year = false;
    if ((yyyy % 4) == 0)
    {
        is_leap_year = true;
    }
    if ((yyyy % 100) == 0)
    {
        is_leap_year = false;
    }
    if ((yyyy % 400) == 0)
    {
        is_leap_year = true;
    }

    return is_leap_year;
}
void print_leap_years(int start_year, int end_year){
    for (int i = start_year; i <= end_year; i++){
        if (is_leap_year(i))
        {
            printf("%d\n", i);
        }
        
    }
}

int main(void)
{
    print_leap_years(1990, 2025);

    return 0;
}

// TODO: Imlement functions here