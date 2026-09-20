#include<iostream>
using namespace std;
int sum(int arr[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    //cout<<s;
   return s;
}

int main(){
    int arr[10],n;
    cin>>n;

    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
   /*int s=1;
    for(int i=0;i<n;i++){
       s*=arr[i];
    }*/
   cout<<sum(arr,n)<<endl;;

   return 0;
}
