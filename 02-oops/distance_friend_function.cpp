#include<iostream>
using namespace std;
class DB;
class DM{
private:
int mtr,cent;
public:
DM(int m=0,int c=0){

mtr=m;
cent=c;
}
friend DM addDist(const DM&,const DB&);
void display(){
cout<<"Distance "<<mtr<<"meters and "<<cent<<"centimeters"<<endl;
}};
class DB{
private:
int ft,in;
public:
DB(int f=0,int i=0){
ft=f;
in=i;
}
friend DM addDist(const DM&,const DB&);
void display(){
cout<<"Distance "<<ft<<"feets and "<<in<<"inches"<<endl;
}};
DM addDist(const DM& dm,const DB& db){
int tc=dm.mtr*100+dm.cent+(db.ft*30.48)+(db.in*2.54);
int nm=tc/100;
int nc=tc%100;
return DM(nm,nc);
}
int main(){
int dmt,dmc;
cin>>dmt>>dmc;
DM ob(dmt,dmc);
int dbf,dbi;
cin>>dbf>>dbi;
DB obj(dbf,dbi);
DM res=addDist(ob,obj);
res.display();
return 0;
}
