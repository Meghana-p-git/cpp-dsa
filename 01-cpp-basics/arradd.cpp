#include<iostream>
using namespace std;
int* add(int a[],int n,int b[],int m){
  
    int* c=new int[n+m];
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=0;i<m;i++){
        c[n+i]=b[i];
    }
return c;
}
int main(){
    int n,a[10],m,b[10];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int* c=add(a,n,b,m);
    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    delete[] c;
return 0;
} 
