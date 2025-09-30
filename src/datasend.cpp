#include"datasend.h"
#include<iostream>
#include<mysql.h>

void datasend::connection_database(){
conn = mysql_init(0);
conn = mysql_real_connect(conn,"localhost","root","hello","Bank",0,NULL,0);
if (conn)
    {
    std::cout<<"connection reussie"<<std::endl;
    }
else
    {
    std::cout<<"connection echouee"<<std::endl;
    }
}
datasend::datasend(){
connection_database();
}
datasend::~datasend(){
mysql_close(conn);
}   
