#include<iostream>
using namespace std;
int main(){
int n,count=0,no=2;
cin>>n;
while(count<n){
   bool flag=true;
   for(int i=2;i*i<=no;i++){
      if(no%i==0){
         flag=false;
         break;
      }
   }
   if(flag){
      cout<<no<<" ";
      count++;
   }
   no++;
   }
return 0;
}
