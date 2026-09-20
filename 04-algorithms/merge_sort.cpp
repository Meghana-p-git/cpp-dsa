#include<iostream>
using namespace std;

void conquer(int arr[],int si,int mid,int ei){
     int size=ei-si+1;
     int *merge=new int[size];
     int idx1=si;
     int idx2=mid+1;
     int x=0;
     while(idx1<=mid && idx2<=ei){
       if(arr[idx1]<=arr[idx2]){
          merge[x++]=arr[idx1++];
       }else{
          merge[x++]=arr[idx2++];
       }
     }
     while(idx1<=mid){
        merge[x++]=arr[idx1++];
     }
     while(idx2<=ei){
        merge[x++]=arr[idx2++];
     }
     for(int i=0;i<size;i++){
         arr[si+i]=merge[i];
     }
     delete[] merge;
}

void divide(int arr[],int si,int ei){

     if(si>=ei){
       return;
     }
     int mid=si+(ei-si)/2;
     divide(arr,si,mid);
     divide(arr,mid+1,ei);
     conquer(arr,si,mid,ei);
}

int main(){
    int arr[]={6,3,9,5,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    divide(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
