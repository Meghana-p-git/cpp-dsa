#include<iostream>
#include<vector>
using namespace std;

void printnum(int n){
  if(n==1){
  cout<<n;
  return;
  }
  cout<<n<<" ";
  printnum(n-1);
}

int factorial(int n){
  if(n==0){                     //Time: O(n), Space: O(n) due to recursion stack
    return 1;
    }
   return n*factorial(n-1);
}

int sum(int n){
    if(n==1){
    return 1;                     //tc=O(n)=sc
    }
    return n+sum(n-1);
}
    
int fibonacci(int n){
    if(n==0||n==1){
    return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
    
}

bool issorted(vector<int> arr,int n){
     if(n==0||n==1){
     return true;
     }
     
     return arr[n-1]>=arr[n-2] && issorted(arr,n-1);
}



int main(){
vector<int> arr={1,2,3,4,5};
printnum(20);
cout<<endl;
cout<< "Factorial of 5: " <<factorial(5)<<endl;
cout<< "Sum from 1 to 10: " <<sum(10)<<endl;
cout<< "Fibonacci(6): " <<fibonacci(6)<<endl;
cout<< "Array is sorted: " <<issorted(arr,arr.size())<<endl;
return 0;
}
