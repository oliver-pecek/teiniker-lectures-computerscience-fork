#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // initial values
    const int N = 1000;

    // Solution 0: Formula found by Carl Friedrich Gauss
    int result = N * (N + 1) / 2;
    printf("result gauss: %4d\n", result);

    // Solution 1: for loop
    int result_for = 0;
    for (int i = 0; i <= N; i++)
    {
        result_for = result_for + i;
    }
    printf("result for: %4d\n", result_for);

    // Solution 2: while loop
    int result_while = 0;
    int iterator = 0;
    while (iterator < N)
    {   
        iterator++;
        result_while = result_while + iterator;
    }
    printf("result while: %4d\n", result_while);

    // Solution 3: do..while loop

    int result_do_while = 0;
    iterator = 0;
    do
    {
        iterator++;
        result_do_while = result_do_while + iterator;
    } while (iterator < N);

    printf("result do while: %4d\n", result_do_while);

    return 0;
}
