 #include<iostream>
#include<climits>
using namespace std;
void array(int arr[],int n){
int s=0,l=0;
for(int i=0;i<n;i++){
   if(arr[i]<arr[s]){
        s=i;
   }
   if(arr[i]>arr[l]){
      l=i;
   }
}
cout<<"smallest ele "<<arr[s]<<" index="<<s<<endl;
cout<<"largest ele "<<arr[l]<<" index="<<l<<endl;
swap(arr[s],arr[l]);
return;
}

int main(){
    int n,arr[10];
    cin>>n;
//s=INT_MAX;
//l=INT_MIN;
for(int i=0;i<n;i++){
       cin>>arr[i];
    }

array(arr,n);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

return 0;
}
