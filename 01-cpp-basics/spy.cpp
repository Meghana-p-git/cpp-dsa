#include<iostream>
using namespace std;
int main(){
int num,s=0,p=1,r;
cin>>num;
//temp=num;
while(num>0){
r=num%10;
s+=r;
p=p*r;
num/=10;
}
if(s==p){
cout<<"s";
}else{cout<<"no";}
return 0;
}

