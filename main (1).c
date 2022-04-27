#include <kipr/wombat.h>

int main()
{
    enable_servos();
    set_servo_position(3, 400);
    msleep(2000);
    set_servo_position(1, 2047);
    msleep(8000);
    return 0;
}
