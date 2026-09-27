#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Graph{
      int V;
      list<int> *l;  //int *arr (dynamic arr)
      
      public:
         Graph(int V){
            this->V=V;   //arr=new int[V] intialising vertex
            l=new list<int> [V];
         }
         
         void addEdge(int u,int v){
             l[u].push_back(v);         //in case of directional only one pushback
             l[v].push_back(u);
         }
         
         /*void printAdjList(){
             for(int i=0;i<V;i++){
                cout<<i<<":";
                for(int neigh:l[i]){
                    cout<<neigh<<" ";
                }
                cout<<endl;
             }
         }*/

  void dfsHelper(int u,vector<bool> &vis){
     cout<<u<<" ";
     vis[u]=true;
     for(int v: l[u]){
        if(!vis[v]){
           dfsHelper(v,vis);
        }
     }
  }

  void dfs(){                        //O(V+E)
     int src=0;
     vector<bool> vis(V,false);
     
    /*  for(int i=0;i<V;i++){              //used for disconnected graphs
         if(!vis[i]){
            dfsHelper(i,vis);
         }
     }*/
   
     
     dfsHelper(src,vis);
     cout<<endl;
  } 
};


int main(){
    Graph g(5);
    
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    
    //g.printAdjList();
    
    cout<<"dfs: ";
    g.dfs();
    
    return 0;
    
}
