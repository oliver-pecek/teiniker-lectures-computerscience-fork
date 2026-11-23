#include <stdio.h>
#include <assert.h>

int main(void)
{
    int n = 5;
    int expected = 1 * 2 * 3 * 4 * 5;

    int result_1 = 1;
    ;
    // TODO: Variant 1: for - loop
    for (int i = 1; i <= n; i++)
    {
        result_1 = result_1 * i;
    }

    printf("result 1: %d\n", result_1);
    assert(expected == result_1);

    int result_2 = 1;
    // Variant 2: while - loop

    int iter = 1;
    while (iter <= n)
    {
        result_2 = result_2 * iter;
        iter++;
    }

    printf("result 2: %d\n", result_2);
    assert(expected == result_2);

    int result_3 = 1;
    // Variant 3: do-while - loop

    int iter_3 = 1;
    do
    {
        result_3 = result_3 * iter_3;
        iter_3++;
    } while (iter_3 <= n);

    printf("result 3: %d\n", result_3);
    assert(expected == result_3);

    return 0;
}
