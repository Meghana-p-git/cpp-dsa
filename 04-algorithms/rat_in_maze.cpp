#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>> &mat,int r,int c,string path,vector<string> &ans){ //,vector<vector<bool>> &vis){
     int n=mat.size();
     if(r<0||c<0||r>=n||c>=n||mat[r][c]==0||mat[r][c]==-1){//|| vis[r][c]==true)
         return;
      }
      
     if(r==n-1 && c==n-1){
         ans.push_back(path);     //ans
         return;
     }
     
     mat[r][c]=-1;                          //Backtracking: explores up to 4 directions from each cell
                                                              /// tc= O(4^ n^2)   //4 for 4 directions
     helper(mat,r+1,c,path+"D",ans);//,vis);//down  
     helper(mat,r-1,c,path+"U",ans);//,vis);//up
     helper(mat,r,c-1,path+"L",ans);//,vis);//left
     helper(mat,r,c+1,path+"R",ans);//,vis);//right
     
     mat[r][c]=1;
}

vector<string> findpath(vector<vector<int>> &mat){
     int n=mat.size();
     
     //vector<vector<bool>> vis(n,vector<bool>(n,false));  //can be optimised without using this ie, sc
     vector<string> ans;
     string path="";
     
     helper(mat,0,0,path,ans);  //,vis
     
     return ans;
}

int main(){
    vector<vector<int>> mat={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    
    vector<string> ans=findpath(mat);
    for(string path:ans){
        cout<<path<<endl;
    }
    
    return 0;
}
