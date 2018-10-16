case 3:
clrscr();
char m;
ifstream a3;
a3.open("flight.dat",ios::binary);
if(!a3)
{
cout<<"file does not exist "<<endl;
return;
 }
cout<<"enter flight id "<<endl;
cin>>m;
a3.read((char*)&f,sizeof(f));
while(!a3.eof())
{
if(f.getfid()==m)
{f.disp();
break;
}
a3.read((char*)&f,sizeof(f));
}
if(a3.eof())
cout<<"invlaid ID."<<endl;
a3.close();
break;