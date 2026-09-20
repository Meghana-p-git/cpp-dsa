#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  cout<<s<<" and length = "<< s.length()<<endl;
  int l=0;
   for(int i=0 ; i < s[i]!='\0' ;i ++){
      l++;
   }
   cout<<l<<endl;
  for(int i=l;i>=0;i--){
    cout<<s[i];
  }
  cout<<endl;
return 0;
}

 /*char str[100];
   //cin>>str;
   cin.getline(str,100);
   cout << str << endl;
   int l=0;
   for(int i=0 ; i < str[i]!='\0' ;i ++){
      l++;
   }
   cout << l << endl;*/
