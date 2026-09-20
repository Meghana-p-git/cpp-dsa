#include<iostream>
#include<string>
using namespace std;

int main(){
  string s1,s2;
  getline(cin,s1);
  
  s2="";
  
  for(int i=s1.length()-1;i>=0;i--){
     s2=s2+s1[i];
     cout<<s1[i];
  }
  cout<<endl;
  if(s1==s2){
   cout<<"is palindrome"<<endl;
   }else cout<<"not a palindrome"<<endl;
return 0;
}
