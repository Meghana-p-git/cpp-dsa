#include<iostream>
using namespace std;

class Node{
public:
   int data;
   Node* next;
   Node* prev;
   
   Node(int val){
     data=val;
     next=nullptr;
     prev=nullptr;
   }
};
class doublylist{
Node* head;
Node* tail;
public:
   doublylist(){
   head=tail=NULL;
   }
   
   void push_front(int val){
     Node* newnode=new Node(val);
     
     if(head==NULL){
       head=tail=newnode;
       return;
     }else{
       newnode->next=head;
       head->prev=newnode;
       head=newnode;
       
     }
   }
   void push_back(int val){
      Node* newnode=new Node(val);
     
     if(head==NULL){
       head=tail=newnode;
       return;
     }else{
       newnode->prev=tail;
       tail->next=newnode;
       tail=newnode;
     }
   }
   void pop_front(){
     if(head==NULL){
       return;
     }else{
       Node* temp=head;
       head=head->next;
       if(head!=NULL){
         head->prev=NULL;
       } 
       temp->next=NULL;
       delete temp;
       }
    }
   void pop_back(){
        if(head==NULL){
          return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail!=NULL){
          tail->next=NULL;
        }
        temp->prev=NULL;
        delete temp;
        
    }
   
   void print(){
      Node* temp=head;
      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
      
      }cout<<endl;
   }
};

int main(){
   doublylist l;
   l.push_front(1);
   l.push_front(2);
   l.push_front(3);
   l.push_back(4);
   
   l.pop_front();
   l.pop_back();
   
   l.print();

 return 0;
 }
