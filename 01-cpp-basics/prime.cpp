#include <iostream>
using namespace std;
string prime(int N){
for(int n=2;n<=N;n++){
bool isprime=true;
for(int i=2;i*i<=n;i++){
   if(n%i==0){
   //return "non prime";
   isprime=false;
   break;
   }
 }}
 return "prime";
}
void digit(int n){
while(n!=0){
  int digit=n%10;
  cout<<digit<<endl;
  n=n/10;
  }
}


int main() {
    int n,i=1,sum=0;
    //bool flag=true;
    cin>>n;
   /* for(i=2;i<n/2;i++){
        if(n%i==0){
        //cout<<odd;
        flag=false;
        break;
        }}
       if(flag){
           cout<<"prime";
       }else{
           cout<<"not prime";
       }*/
       //cout<<prime(n)<<endl;
       digit(n);
     return 0;
}
