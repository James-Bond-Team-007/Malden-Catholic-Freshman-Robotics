#include <kipr/wombat.h>

int main()
{
    create_connect();
    
    while ( !(get_create_lbump() || get_create_rbump()))///from starting box, backs up till pipe which fixes it
  {
      create_drive_direct(100, 100);
  }
    create_stop();
    msleep(500);
    
    create_drive_direct(-125, -125);////goes forward till center of board
    msleep(1300);
    
    create_drive_direct(-125, 0);///turns to the board and goes down it
    msleep(3010);
    
    create_drive_direct(-125, -125);
    msleep(4200);
    
    create_drive_direct(0, -125);////turns around, backside facing gate
    msleep(3025);
    
    while ( !(get_create_lbump() || get_create_rbump()))///backs up till hits gate
  {
      create_drive_direct(100, 100);
  }
    create_stop();
    msleep(500);
    
    create_drive_direct(-50, 50);///once bump is hit, turns
    msleep(500);
    
    enable_servos();//claw grabs botguy
    set_servo_position(0, 450);
    msleep(1500);
    set_servo_position(1, 1590);
    msleep(1500);
    
    //back-up
    create_drive_direct(-200, -200);
    msleep(2000);
    create_drive_direct(200, -200);
    msleep(500);
    
    create_drive_direct(0, 200);///turns towards the airlock and goes to it
    msleep(1200);
    
    create_drive_direct(200, 200);
    msleep(3000);
    
    set_servo_position(1, 10);////opens claw to drop botguy on airlock
    msleep(1500);
    disable_servos();
    create_stop();
    create_disconnect();
}
