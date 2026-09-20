#include<iostream>
using namespace std;

void unique(int arr[],int n){
     for(int i=0;i<n;i++){
         bool s=true;
         for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
              s=false; 
              break;
             }
         }
         if(s){
         cout<<arr[i]<<" ";
         }
    }
    //cout<<endl;
}         

int main(){
    int arr[10],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique(arr,n);
return 0;
}
