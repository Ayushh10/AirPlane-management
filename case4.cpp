case 4:
clrscr();
ifstream a4;
ofstream a5;
a4.open("flight.dat",ios::in|ios::binary);
a5.open("temp.dat",ios::out|ios::binary);
if(!a4)
{
cout<<"file does not exist "<<endl;
return;
}
int fd;
cout<<"enter flight id of the flight to be deleted"<<endl;
cin>>fd;
a4.read((char*)&f,sizeof(f));
while(!a4.eof())
{
if(f.getfid()!=fd)
{
a5.write((char*)&f,sizeof(f));
}
a4.read((char*)&f,sizeof(f));
}
a4.close();
a5.close();
remove("flight.dat");
rename("temp.dat","flight.dat");
break;