#include<iostream>
using namespace std;

int main(){
    int arr[10],n,ele;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"enter ele:"<<endl;
    cin>>ele;
    
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
           cout<<i;
           return 0;
        }
              //else{
    }
    cout<<"invalid ele";
    return -1;
}

