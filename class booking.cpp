class booking
{
int bid,fid,pno;
char pname[50],to[50],from[50],date[50];
public:
       void binput();
       void bdisp();
       int getbid();
       int getpno();
       int getfid(){return fid;}
       char *getdate(){return date;};
       };
void booking::binput()
{
cout<<"enter booking no"<<endl;
cin>>bid;
cout<<"enter no. of passenger "<<endl;
cin>>pno;
cout<<"enter passenger name"<<endl;
cin>>pname;
cout<<"enter flight id"<<endl;
cin>>fid;
cout<<"enter to and from"<<endl;
cin>>to>>from;
cout<<"enter date of journey"<<endl;
cin>>date;
}
void booking::bdisp()
{
cout<<bid<<"\t"<<pname<<"\t"<<pno<<"\t"<<fid<<"\t"<<to<<"\t"<<from<<"\t"<<date<<endl;
}

int booking::getbid()
{
return bid;
}
int booking::getpno()
{
return pno;
}

