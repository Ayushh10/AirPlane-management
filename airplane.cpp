#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
class flight
{
int fid,scap;
float fare;
char company[50],from[50],to[50];
public:int aseat;
       void input();
       void disp();
       int getfid();
       int getscap();
       float getfare();
 };