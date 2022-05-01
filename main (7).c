#include <kipr/wombat.h>

int main()
{
    //light_start();
    //msleep(7000);
    
    // forward a bit
    motor(0, -100);
    motor(1, -100);
    msleep(750);
    stop();
    
    // turn toward the wall
    motor(0, 25);
    motor(1, -25);
    msleep(3000);
    stop();
    
    // Move out to cube wall
    motor(0, -100);
    motor(1, -100);
    msleep(9500);
    
    // turn to the wall
    motor(0, -25);
    motor(1, 25);
    msleep(3200);
    stop();
    
    //Forward
    motor(0, -50);
    motor(1, -50);
    wait_for_touch(0);
    stop();

    //Backwards
    motor(0, 50);
    motor(1, 50);
    msleep(1300);
    stop(); 

    //Turn
    motor(0, -25);
    motor(1, 25);
    msleep(3200);
    stop();

    //Forward
    motor(0, -100);
    motor(1, -100);
    msleep(1800);
    stop(); 

    //Turn
    motor(0, -100);
    motor(1, 0);
    msleep(800);
    stop();

    //Forward
    motor(0, -100);
    motor(1, -100);
    msleep(4000);
    stop(); 
    
    //Forward
    motor(0, 0);
    motor(1, -100);
    msleep(800);
    stop();
    
    //Forward
    motor(0, -100);
    motor(1, -100);
    msleep(1000);
    stop();

}

void stop()
{
    motor(0, 0);
    motor(1, 0);
}

void light_start()
{
    while(analog(0)>4000)
    {
        if(analog(0)<=4000)
        {
            break;
        }
    }
}
    
    
    
    
    