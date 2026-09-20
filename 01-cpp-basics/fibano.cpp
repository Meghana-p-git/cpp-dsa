#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,nt,i=1;
    cin>>n;
    
    if(n<=0){
        return 0;
    }

    cout<<a;

    if(n<=2){
       if(n==2)
        cout<<" "<<b<<" ";
        return 0;
    }

    cout<<" "<<b<<" ";
    
    do{
      nt=a+b;
      cout<<nt<<" ";
      a=b;
      b=nt;
      i++;
   }while(i<n-1);

   return 0;
}


