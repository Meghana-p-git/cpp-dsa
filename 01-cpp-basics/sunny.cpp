#include<iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    s=n+1;
    bool flag=false;
    for(int i=1;i<=s/2;i++){
        if(s==(i*i)){
           flag=true;
        }
    }
    if(flag){cout<<"is sunny num";}
    else{cout<<"not";}
    return 0;
}
