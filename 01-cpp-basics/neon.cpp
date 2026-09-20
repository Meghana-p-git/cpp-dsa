#include<iostream>
using namespace std;
int main(){
int n,p,s=0,r;
cin>>n;
p=n*n;
while(p>0){
r=p%10;
s+=r;
p/=10;
}
if(s==n){
cout<<"s";
}else{
cout<<"no";}
return 0;
}
