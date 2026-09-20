#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool isvalid(vector<int> &arr,int n,int c,int minalloweddist){  
     int cows=1,stall=arr[0];
     
     for(int i=0;i<n;i++){      //o(n) 
         if(arr[i]-stall>=minalloweddist){
           cows++;
           stall=arr[i];
         
         }
         if(cows==c){
            return true;
         }
         
     }
     return false;
}

int aggressivecows(vector<int> &arr,int n,int c){
    sort(arr.begin(),arr.end());   // nlogn
    int ans=-1;
    int st=1,end=arr[n-1]-arr[0];//range of possible ans
    
    while(st<=end){      //o(logN) //since isvalid is called TC=o(logN*n)  so TC of pblm = o(logN*n)
         int mid=st+(end-st)/2;
         
         if(isvalid(arr,n,c,mid)){//left
             ans=mid;
             st=mid+1;
         }else{
             end=mid-1;
         }
    } 
    return ans;
    
}

int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5,c=3;
    
    cout<<aggressivecows(arr,n,c)<<endl;
    return 0;
}
