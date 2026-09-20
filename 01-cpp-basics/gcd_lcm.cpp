#include <iostream>
using namespace std;
int gcd(int a,int b){
  while(a>0 && b>0){
    if(a>b){
     a=a%b;
    } else{
      b=b%a;
    }
  }
  if(a==0) return b;
  return a;
}
int gcdrec(int a,int b){
    if(b==0) return a;
    return gcdrec(b,a%b);
}

int main() {
    int a,b,g,lcm,c=1,s;
    cin>>a>>b;
    s=(a<b)?a:b;
    while(c<=s){
        if(a%c==0 && b%c==0){
            g=c;
        }
        c++;
    }
    lcm=(a*b)/g;
    cout<<"lcm="<<lcm<<" gcd="<<g<< endl;
    
    cout<<"using recursion: "<<gcdrec(a,b)<<endl;//using recursion
    
    
    return 0;
}
