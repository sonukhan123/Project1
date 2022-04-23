#include <iostream>
#include<windows.h>
#include<mysql.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    MYSQL *conn;
    conn=mysql_init();
    conn=mysql_real_connect(conn,"192.168.1.111","root","","test",0,NULL,0);
    if(conn)
        cout<<"Connected";
    else
        cout<<"NOT CONNECTED";
    return 0;
}
