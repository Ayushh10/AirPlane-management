case 5:
clrscr();
b.binput();
int bs=0;

fstream find;
find.open("booking.dat",ios::in|ios::binary);
if(!find)
{
bs=0;
}
else
{
booking t;
find.read((char *)&t,sizeof(t));
while(!find.eof())
{
if(t.getfid()==b.getfid() && strcmpi(t.getdate(),b.getdate())==0)
{
bs=bs+t.getpno();
}
find.read((char *)&t,sizeof(t));
}
find.close();
}
int flag=0;
fstream a6;
a6.open("flight.dat",ios::in|ios::binary);
a6.read((char*)&f,sizeof(f));
while(!a6.eof())
{
if(b.getfid()==f.getfid())
{
if(f.getscap()-bs>=b.getpno())
{
 flag=1;
 break;
}
}
a6.read((char*)&f,sizeof(f));
}
a6.close();
if(flag==0)
{
cout<<"either no seats available or flight not available"<<endl;
}
else
{
fstream bks;
bks.open("booking.dat",ios::app|ios::binary);
bks.write((char*)&b,sizeof(b));
bks.close();
cout<<"Booking is done";
}
break;