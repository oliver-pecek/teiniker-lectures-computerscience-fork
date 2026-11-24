#include <stdio.h>
#include <assert.h>

int series(int r1, int r2)
{
    return r1 + r2;
}

int parallel(int r1, int r2){
    return (r1*r2)/((r1)+(r2));
}

int main(void)
{
    //            +-[120]-+
    //   --[120]--+       +--[120]--
    //            +-[120]-+

    int r = 0;

    // TODO: Calculate total resistance
    int rp1 = parallel(120,120);
    int rs1 = series(120, rp1);
    r = series(rs1, 120);
    printf("R = %d Ohm\n", r);
    assert(300 == r);

    return 0;
}

// TODO: Implement functions