#include <stdio.h>

// TODO: define enum
enum led_t  {
    OFF = 101,
    GREEN = 100,
    YELLOW = 50,
    RED = 25,
};

// TODO: define enum variable led

int main(void)
{
    enum led_t led = OFF;   
    //distance in [cm] read from HC-SR04 Ultrasonic Distance Sensor
    long distance = 100;

    // TODO: Map distance to LED color

    if(distance > 100 || distance <= 0){
        led = OFF;
    }

    if(distance <= GREEN){
        led = GREEN;
    }

    if(distance <= YELLOW){
        led = YELLOW;
    }
    if(distance <= RED){
        led = RED;
    }

    // TODO: Output LED

    switch (led)
    {
    case OFF:
        /* code */
        printf("LED: OFF\n");
        break;
    
    case GREEN:
        printf("LED: GREEN\n");
        break;
    case YELLOW:
        printf("LED: YELLOW\n");
        break;
    case RED:
        printf("LED: RED\n");
    default:
        printf("error");
        break;
    }


    return 0;
}
