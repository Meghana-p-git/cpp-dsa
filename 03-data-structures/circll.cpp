#include<iostream>
using namespace std;

class Node{
public:
   int data;
   Node* next;
   
   Node(int val){
     data=val;
     next=nullptr;
   }
};

class cll{
   Node* head;
   Node* tail;
   public:
     cll(){
        head=tail=NULL;
      }
      
   void push_front(int val){
       Node* newnode=new Node(val);
         if(head==NULL){
            head=tail=newnode;
            tail->next=newnode;
         }
         newnode->next=head;
         head=newnode;
         tail->next=head;
   }
   
   void push_back(int val){
        Node* newnode=new Node(val);
         if(head==NULL){
            head=tail=newnode;
            tail->next=newnode;
         }
         tail->next=newnode;
         tail=newnode;
         tail->next=head;
   }
   
   void pop_front(){
        if(head==NULL){
           return;
        }
          Node* temp=head;
          head=head->next;
          tail->next=head;
          temp->next=NULL;
          delete temp; 
   }
   
   void pop_back(){
        if(head==NULL){
           return;
        }
        Node* temp=head;
        while(temp->next!=tail){
           temp=temp->next;
        }
        temp->next=head;
        delete tail;
        tail=temp;
   }
   
   void print(){
     if(head==NULL) return;
     
     cout<<head->data<<"->";
     Node* temp=head->next;
     while(temp!=head){
     cout<<temp->data<<"->";
     temp=temp->next;
     }
     cout<<temp->data<<endl;
   }
};

int main(){
   cll c;
   c.push_front(1);
   c.push_front(2);
   c.push_front(3);
   c.push_front(4);
   c.push_back(5);
   
 //  c.pop_front();
   c.print();
  // c.pop_back();
   c.print();

return 0;

}

