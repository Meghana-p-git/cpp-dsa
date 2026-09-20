#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a,b,c,x1,x2,d;
    cin>>a>>b>>c;
    
    d=b*b-4*a*c;
    
    if(d>0){
       x1=(-b+sqrt(d))/(2*a);
       x2=(-b-sqrt(d))/(2*a);
       cout<<x1<<"&"<<x2<<endl;
    }
   else if(d==0){
           x1=x2=-b/(2*a);
           cout<<x1<<"&"<<x2<<endl;
   }
   else{
      float r,im;
      r=-b/(2*a);
      im=sqrt(-d)/(2*a);
      cout<<r<<"+"<<im<<"i"<<endl;
      cout<<r<<"-"<<im<<"i"<<endl;
  }
  return 0;
}

