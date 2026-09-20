#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int> &arr,int n,int m,int maxallowedboards){  
     int painters=1,boards=0;
     for(int i=0;i<n;i++){      //o(n) 
         if(arr[i]>maxallowedboards){
            return false;
         }
         if(boards+arr[i]<=maxallowedboards){
           boards+=arr[i];
         }else{
           painters++;
           boards=arr[i];
         }
         
     }
     return painters>m ? false:true;
}

int painterpartition(vector<int> &arr,int n,int m){   //o(logN+n)  where n no of books and N is range
    
    if(m>n) return -1;
    
    int sum=0;
    
    for(int i=0;i<n;i++){    //o(n)
        sum += arr[i];
    }
    int ans=-1;
    int st=0,end=sum;//range of possible ans
    
    while(st<=end){      //o(logN) //since isvalid is called TC=o(logN*n)  so TC of pblm = o(logN*n)
         int mid=st+(end-st)/2;
         
         if(isvalid(arr,n,m,mid)){//left
             ans=mid;
             end=mid-1;
         }else{
             st=mid+1;
         }
    }
    return ans;
    
}

int main(){
    vector<int> painter={40,30,10,20};
    vector<int> painter1={15,17,20};
    int n=4,n1=3,m=2;
    cout<<painterpartition(painter,n,m)<<endl;
    return 0;
}
