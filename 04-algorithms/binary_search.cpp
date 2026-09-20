#include<iostream>
#include<vector>
using namespace std;

int binsearch(vector<int>& arr,int target){                //iterative
    int st=0,end=arr.size()-1;
    while(st<=end){
      int mid=st + (end-st)/2;
         if(target>arr[mid]){
            st=mid+1;
         }
         else if(target<arr[mid]){
            end=mid-1;
         }
         else{
            return mid;
         }
     }
     return -1;
} 
 
int recbinsearch(vector<int>& arr,int target,int st,int end){            //recursive
    
    if(st<=end){
      int mid=st + (end-st)/2;
         if(target>arr[mid]){
            return recbinsearch(arr,target,mid+1,end);
         }
         else if(target<arr[mid]){
           return recbinsearch(arr,target,st,mid-1);
         }
         else{
            return mid;
         }
     }
     return -1;
}          
    
int main(){
vector<int> arr1={-1,0,3,4,5,9,12};
int target1=12;

cout<<binsearch(arr1,target1)<<endl;

vector<int> arr2={-1,0,3,5,9,12};
int target2=0;
 int st=0,end=arr2.size()-1;
cout<<recbinsearch(arr2,target2,st,end)<<endl;

return 0;
}       
