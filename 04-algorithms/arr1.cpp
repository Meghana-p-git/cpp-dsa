#include<iostream>
using namespace std;
void array(int arr[],int n){
for(int i=0;i<n;i++){
arr[i]=arr[i]*2;
}}
int main(){
int arr[10],n;
cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];
}
array(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

cout<<endl;
return 0;
}
