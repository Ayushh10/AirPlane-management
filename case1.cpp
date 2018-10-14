switch(ch)
{
case 1:
clrscr();
fstream a1("flight.dat",ios::app|ios::binary);
f.input();
a1.write((char*)&f,sizeof(f));
a1.close();
break;
