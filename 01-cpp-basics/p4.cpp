#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
for(int j=0;j<=i;j++){
cout<<"*";
}
for(int j=2*(n-i)-2;j>0;j--){
cout<<" ";
}
for(int j=i;j>=0;j--){
cout<<"*";
}
cout<<endl;
}
for(int i=0;i<n;i++){
for(int j=n;j>i;j--){
cout<<"*";
}
for(int j=0;j<=2*i-1;j++){
cout<<" ";
}
for(int j=n-1;j>=i;j--){
cout<<"*";
}
cout<<endl;
}


return 0;
}
