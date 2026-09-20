#include<iostream>
using namespace std;
/*void arev(int arr[],int n){
int s=0,e=n-1;
while(s<e){
swap(arr[s],arr[e]);
s++,e--;
}}*/
int main(){
int arr[10],n;
cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];
}
int s=0,e=n-1;
while(s<e){
swap(arr[s],arr[e]);
s++,e--;
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}
