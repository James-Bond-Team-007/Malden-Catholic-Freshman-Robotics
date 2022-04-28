#include <kipr/wombat.h>

int main()
{
    create_connect();
    create_drive_direct(96,100);
    msleep(1350);
    create_drive_direct(95.9,100);
    msleep(1000);
    create_drive_direct(96,100);
    msleep(1350);
    create_drive_direct(95.9,100);
    msleep(1000);
    create_drive_direct(96,100);
    msleep(1350);
    create_drive_direct(95.9,100);
    msleep(1000);
    create_stop();
    create_disconnect();
    return 0;
}
