#include<iostream>
//#include<string>
using namespace std;
class Rect {
public:
int length,width;
Rect(int l=0,int w=0){
length=l;
width=w;
}
Rect operator+(Rect const& other)
{
Rect add;
add.length=length+other.length;
add.width=width+other.width;
return add;
}
};
int main(){
Rect r1(5,6);
Rect r2(3,4);
Rect r3=r1+r2;
cout<<"new length"<<r3.length<<"and new width"<<r3.width<<endl;
return 0;
}
