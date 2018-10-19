case 6:
booking t;
fstream tr;
tr.open("booking.dat",ios::in|ios::binary);
tr.read((char *)&t,sizeof(t));
while(!tr.eof())
{
t.bdisp();
tr.read((char *)&t,sizeof(t));
}
tr.close();
getch();
break;
}


}while(ch!=7);
getch();
}