#include <stdio.h>

// TODO: Define enum events as events_t

enum events_t {
    CAR_AT_GATE,
    TOP_SWITCH,
    CAR_JUST_EXITED,
    BOTTOM_SWITCH,

};


int main(void)
{
    enum events_t event = CAR_JUST_EXITED;

    switch (event)
    {
    case CAR_AT_GATE:
        printf("MOTOR: >>>\n");
        break;
    case TOP_SWITCH:
        printf("MOTOR: ---\n");
        break;
    case CAR_JUST_EXITED:
        printf("MOTOR: <<<\n");
        break;
    case BOTTOM_SWITCH:
        printf("MOTOR: ---\n");
        break;
    
    default:
        printf("invalid state\n");
        break;
    }

    // TODO: Implement switch-case statement
    
    return 0;
}
