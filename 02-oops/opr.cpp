#include<iostream>
using namespace std;
class A{
int a;
public:
A(int c){
a=c;
}
void operator ++ (){
a=a+1;
}
void display()
{
cout<<a<<endl;
}
};
int main()
{
A s1(5);
s1.display();
++s1;
s1.display();
return 0;
}
