#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> vec={1,2,3};
     vec.push_back(10);
     vec.push_back(5);
    for(int i:vec){
    cout<<i<<endl;
    }
    
    cout<<"before popsize:"<<vec.size()<<endl;
   vec.pop_back();
    cout<<"size:"<<vec.size()<<endl;
    cout<<"f="<<vec.front()<<" b="<<vec.back()<<endl;
    cout<<vec.at(2)<<endl;
    cout<<vec.capacity();
    return 0;
}
