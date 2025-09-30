#ifndef DATASEND_H_INCLUDED
#define DATASEND_H_INCLUDED
#include<mysql.h>
class datasend{
public:
MYSQL *conn;

datasend();
~datasend();
void connection_database();
};



#endif 