#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<unordered_set>
#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr={10,4,2,8,3,5,1,7};
reverse(arr.begin(),arr.end());
for(int val:arr){
  cout<<val<<" ";
}
cout<<endl;
return 0;
}

/*bool comparator(pair<int,int> p1,pair<int,int> p2){
   if(p1.second<p2.second) return true;
   if(p1.second>p2.second) return false;
   
   if(p1.first<p2.second) return true;
   else return false;
}

int main(){
//int arr[]={10,4,2,8,3,5,1,7};
vector<int> arr={10,4,2,8,3,5,1,7};
//sort(arr,arr+8,greater<int>());          //greater functor is used to sort in reverse or desc order
sort(arr.begin(),arr.end(),greater<int>());
for(int val:arr){
  cout<<val<<" ";
}
cout<<endl;

vector<pair<int,int>> vec={{10,7},{2,4},{3,5},{1,7}};
sort(vec.begin(),vec.end(),comparator);
for(auto p:vec){
  cout<<p.first<<" "<<p.second<<endl;
}
cout<<endl;
return 0;

}


/*unordered_set<int> s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(3);
s.insert(4);
s.insert(5);
for(int val:s){
  cout<<val<<" ";
}
cout<<endl;
return 0;
}
/*int main(){
multimap<string,int> m;
m.emplace("tv",100);
m.emplace("tv",100);
m.emplace("tv",100);
m.emplace("tv",100);
m.erase(m.find("tv"));
for(auto p:m){
cout<<p.first<<" "<< p.second<<endl;
}
return 0;
}*/

/*int main(){
map<string,int> m;
m["tv"]=100;
m["laptop"]=100;
m["headphone"]=50;
m["tablet"]=120;
m["watch"]=50;
//m.insert({"camera",25}); 
m.emplace("camera",25);
m.erase("tv");
for(auto p:m){
cout<<p.first<<" "<< p.second<<endl;
}
cout<<"count"<<m.count("laptop")<<endl;

if(m.find("camera")!= m.end()){
cout<<"found";
}else{ cout<<"not found"<<endl;
}
return 0;
}*/

/*int main(){

//priority_queue<int> q;
priority_queue<int,vector<int>,greater<int>> q;    //used to pop the reverse order queue
q.push(5);
q.push(3);
q.push(10);
q.push(4);

while(!q.empty()){
cout<<q.top()<<" ";                 //cout<<q.front()<<" "; used in case of queue
q.pop();
}
cout<<endl;

return 0;
}*/

/*int main(){
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);

//cout<<s.top()<<endl;
/*while(!s.empty()){
cout<<s.top()<<" ";
s.pop();
}
cout<<endl;
stack<int> s2;
s2.swap(s);
cout<<"s size "<<s.size()<<" and s2 size "<<s2.size()<<endl;
return 0;
}*/



//int main(){
//vector<int> vec={1,2,3,4,5};
//cout<<vec.size()<<endl;
//cout<<vec.capacity()<<endl;
//vector<int>::iterator it;
//for(auto it=vec.rbegin();it!=vec.rend();it++){     //auto is used in case of reverse
//cout<<*(it);
//}

//list<int> l={1,2,3,4,5};
/*deque<int> d={1,2,3,4,5};
for(int val:d){
  cout<<val<<" ";
}
pair<int,pair<int,char>> p={1,{3,'a'}};
cout<<p.first<<" "<<p.second.second<<endl;
cout<<endl;
return 0;
}*/
