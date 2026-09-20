#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n=7;
    int arr[]={3,-4,5,4,-2,7,-8};
    int maxsum=INT_MIN,cursum=0;
    for(int s=0;s<n;s++){        //this is to find maxsum using kadane's algorithm
       cursum+=arr[s];
       maxsum=max(cursum,maxsum);
       if(cursum<0){
          cursum=0;
       }
    }      
    cout<<maxsum<<endl;
    return 0;
}  


/*for(int s=0;s<n;s++){       //this is to find maxsum using brute force approach 
       int cursum=0;
       for(int e=s;e<n;e++){
           cursum+=arr[e];
           maxsum=max(cursum,maxsum);
       }
    }*/ 
    
    

/*for(int s=0;s<n;s++){
       for(int e=s;e<n;e++){
           for(int i=s;i<=e;i++){
              cout<<arr[i];       // this loop is used to print the sub arrays
           }
           cout<<" ";
       }
       cout<<endl;
    }*/
