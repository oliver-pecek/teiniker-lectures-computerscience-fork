#include <stdio.h>
#include <math.h>
#include <assert.h>

const double ERROR = 1E-3;

int main(void)
{
    // R1=100Ohm, R2=220Ohm, R3=330Ohm
    float r_1 = 100.0;
    float r_2 = 220.0;
    float r_3 = 330.0;

    float r_23 = 1.0 / ((1.0 / r_2) + (1.0 / r_3));
    float r_ges = r_1 + r_23;

    printf("Rges = %5.2f Ohm\n", r_ges);
    assert(fabs(232.0 - r_ges) <= ERROR);

    return 0;
}
