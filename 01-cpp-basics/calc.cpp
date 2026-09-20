#include<iostream>
using namespace std;
int main(){
float a,b,c;
char op;
cin>>a>>b>>op;
switch(op){
case '+':cout<<(a+b);
        break;
case '-':cout<<(a-b);
        break;
case '*':cout<<(a*b);
        break;  
case '/':if(b==0){
                cout<<"invalid";
                break;
                }
         else{cout<<(a/b);
         break;}
//case '%':cout<<(int)a%b;
   //     break;  
default:cout<<"invalid";
}
return 0;
}                            
        
