#include<iostream>
using namespace std;

class node{
public:
   int data;
   node* next;
   
   node(int val){
     data=val;
     next=nullptr;
     }
};

class linkedlist{
private:
   node* head;
public:
    linkedlist():head(nullptr){};
    
     ~linkedlist() {
        node* current = head;
        while (current != nullptr) {
            node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
    
void insatend(int val){
     node* n=new node(val);
     if (head==nullptr){
        head=n;
        return;
     }
     node* temp=head;
     while(temp->next!=nullptr){
          temp=temp->next;
     }
     temp->next=n;
}
 
void insathead(int val){
     node* n=new node(val);
     n->next=head;
     head=n;
}


void display(){
     node* temp=head;
     while(temp!=nullptr){
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
}
};

int main(){
   linkedlist l;
   l.insatend(1);
   l.insatend(2);
   l.insatend(3);
   l.insathead(4);
   l.display();
   
   return 0;
 }
