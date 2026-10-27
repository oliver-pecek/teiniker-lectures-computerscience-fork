#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <assert.h>

const double ERROR = 1E-3;

int main(void)
{
    uint8_t n1 = 10;
    uint8_t n2 = 22;
    uint8_t n3 = 33;
    uint8_t n4 = 47;
    uint8_t n5 = 56;

    float sum = n1 + n2 + n3 + n4 + n5;
    printf("sum = %3.1f\n", sum);
    assert(fabs(sum - 168) <= ERROR);
    
    float mean = sum / 5.0;

    printf("mean = %5.2f\n", mean);
    assert(fabs(mean - 33.6) <= ERROR);

    return 0;
}
