#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int conquer(vector<int> &arr,int si,int mid,int ei){
     vector<int> temp;
     
     int i=si;
     int j=mid+1;
     int invcount=0;
     while(i<=mid && j<=ei){
       if(arr[i]<=arr[j]){
          temp.push_back(arr[i]);
          i++;
       }else{
          temp.push_back(arr[j]);
          j++;
          invcount+=(mid-i+1);
       }
     }
     while(i<=mid){
        temp.push_back(arr[i]);
        i++;
     }
     while(j<=ei){
        temp.push_back(arr[j]);
          j++;
     }
     for(int idx=0;idx<temp.size();idx++){
         arr[idx+si]=temp[idx];
     }
     return invcount;
}

int divide(vector<int> &arr,int si,int ei){

     if(si<ei){
        int mid=si+(ei-si)/2;
        int lc=divide(arr,si,mid);
        int rc=divide(arr,mid+1,ei);
        int ic=conquer(arr,si,mid,ei);
        
        return lc+rc+ic;
     }
     return 0;
     
}

int main(){
    //vector<int> arr={6,3,5,2,7};
    vector<int> arr={1,3,5,10,2,6,8,9};
   // int n=sizeof(arr)/sizeof(arr[0]);
    
    int ans=divide(arr,0,arr.size()-1);
    
    cout<<"no of inv:"<<ans<<endl;

return 0;
}
