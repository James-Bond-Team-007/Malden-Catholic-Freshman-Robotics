#include <kipr/wombat.h>

//fix servo to grab

int main()
{
    light_start();
    create_connect();
    start(100);
    drive(-50, 500);
    turn_left(50, 3200);
    center(-100);
    drive(-50, 50);
    turn_right(50, 3200);
    bump(500);///edits start here to sq off to grab botguy
    drive(-50, 800);
    turn_right(40, 750);
    drive(50, 750);
    create_stop();
    msleep(1000);
    claw_grab(100, 500);
    drive(-75, 350);
    turn_right(50, 3800);
    bump(500);
    create_stop();
    msleep(1000);
    drive(-50, 2000);///2nd edit here to sq off to air lock
    //turn_left(300, 100);
    create_stop();
    msleep(1000);
    claw_lower(100, 520);
    claw_release(100, 500);
    create_disconnect();
    return 0;
}

void light_start()
{
    while(analog(1)>4020)
    {
        if(analog(1)<=4020)
        {
            break;
        }
    }
}

void claw_release(int speed, int time)
{
    enable_servos();//claw grabs botguy
    set_servo_position(3, 350);
    msleep(1500);
    disable_servos();
}

void claw_lower(int speed, int time)
{
    enable_servos();
    set_servo_position(1, 170);
    msleep(2000);
    disable_servos();
}

void claw_grab(int speed, int time)
{
    enable_servos();//claw grabs botguy
    set_servo_position(1, 450);
    msleep(1800);
    set_servo_position(3, 2047);
    msleep(1500);
    disable_servos();
}

void bump(int time)

{
    //create_connect();
    while ( !(get_create_lbump() || get_create_rbump()))///backs up till bumped
  {
      create_drive_direct(100, 100);
  }
    create_stop();
    msleep(time);
}
    
void center(int speed)
    
{    
    while(analog(0) <= 3000)
    {
        create_drive_direct(speed, speed);////goes forward till center of board
    }
}

void reverse(int speed, int time)
{
    create_drive_direct(-speed, -speed);
    msleep(time);
}

void drive(int speed, int time)
{
    create_drive_direct(speed, speed);
    msleep(time);
}

void turn_left(int speed, int time)
{
    create_drive_direct(-speed, speed);
    msleep(time);
}

void turn_right(int speed, int time)
{
    create_drive_direct(speed, -speed);
    msleep(time);
}

//Gets robot out of starting box
void start(int speed)
{
    while(analog(0) <= 3000)
    {
        create_drive_direct(speed, speed);////goes forward till center of board
    }
}
