#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// Search for an element in a 2D array
bool linsearch(int mtx[][3],int r,int c,int key){

   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
          if(mtx[i][j]==key){
             //cout<<i<<","<<j<<endl;
             return true;
          }
       }
   }
   return false;
}

// Search for an element and return its row and column
pair<int,int> linsearch2d(int mtx[][3],int r,int c,int key){

   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
          if(mtx[i][j]==key){
             
             return {i,j};
          }
       }
   }
   return {-1,-1};
}

// Find the maximum column sum
int getMaxSum(int mtx[][3],int r,int c){
    int maxsum=INT_MIN;
    /*for(int i=0;i<r;i++){             //rowsum
       int rowsumI=0;
       for(int j=0;j<c;j++){
       rowsumI +=mtx[i][j];
       }
       maxsum=max(maxsum,rowsumI);
    }*/
    for(int j=0;j<c;j++){             //colsum
       int colsumI=0;
       for(int i=0;i<r;i++){
       colsumI +=mtx[i][j];
       }
       maxsum=max(maxsum,colsumI);
    }
    return maxsum;
}

// Calculate the sum of both diagonals
int diagonalsum(int mtx[][3],int n){   
    int sum =0;
    /*for(int i=0;i<n;i++){    //tc =O(n^2)
      for(int j=0;j<n;j++){
          if(i==j){
            sum+=mtx[i][j];
          }else if(j==n-1-i){
            sum+=mtx[i][j];
          }
      }
    }*/
    for(int i=0;i<n;i++){   // tc=o(n)
       sum+=mtx[i][i];            // Avoid counting the center element twice
       if(i!=n-i-1){
         sum+=mtx[i][n-i-1];
       }
    }
    return sum;
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=3,c=3;
    int n=3;
    
   /* int key;
    cout<<"enter key"<<endl;
   cin>>key;
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
       cin>>arr[i][j];
       }
   }*/
   
   // Search and find position
   pair<int,int> pair=linsearch2d(arr,4,3,8);
   if(pair.first!=-1){
   cout<< "Element position: "<<pair.first<<","<<pair.second<<endl;
   }else{
   cout<<"target not found"<<endl;
   }
   
       // Maximum column sum
   cout<<"Maximum column sum: "<<getMaxSum(arr,r,c)<<endl;
   
   // Diagonal sum
   cout<< "Diagonal sum: "<<diagonalsum(arr,n)<<endl;
   return 0;
 }
  
