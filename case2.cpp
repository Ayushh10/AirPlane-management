case 2:
clrscr();
ifstream a2("flight.dat",ios::binary|ios::in);
a2.read((char*)&f,sizeof(f));
while(!a2.eof())
{ int aa=0;
cout<<"FLIGHT"<<aa<<endl;
aa++;
cout<<endl;
f.disp();
cout<<endl<<"press key for next record";
getch();
clrscr();
a2.read((char*)&f,sizeof(f));
}
a2.close();
getch();
clrscr();
break;
