#include <kipr/wombat.h>

int main()
{
    create_connect();
    
    while ( !(get_create_lbump() || get_create_rbump()))
  {
      create_drive_direct(100, 100);
  }
    create_stop();
    msleep(500);
    create_drive_direct(-200, -200);
    msleep(1100);
    
    create_drive_direct(-200, 0);
    msleep(2050);
    
    create_drive_direct(-200, -200);
    msleep(9000);
	
    create_drive_direct(200, 200);
    msleep(6200);
    
    create_drive_direct(-200, 0);
    msleep(2260);
    
    while ( !(get_create_lbump() || get_create_rbump()))
  {
      create_drive_direct(100, 100);
  }
    create_stop();
    msleep(500);
        
    create_drive_direct(-200, 0);
    msleep(4200);
    
    create_stop();
    create_disconnect();
}
