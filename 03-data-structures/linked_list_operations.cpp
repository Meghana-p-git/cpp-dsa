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
class list{
Node* head;
Node* tail;
public:
   list(){
   head=tail=NULL;
   }
   
   void push_front(int val){
     Node* newnode=new Node(val);
     
     if(head==NULL){
       head=tail=newnode;
       return;
     }else{
       newnode->next=head;
       head=newnode;
     }
   }
   
   void push_back(int val){
      Node* newnode=new Node(val);
     
     if(head==NULL){
       head=tail=newnode;
       return;
     }else{
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
       temp->next=NULL;
       delete temp;
       }
    }
    
    void pop_back(){
        if(head==NULL){
          return;
        }
        
        if(head==tail){
           delete head;
           head=tail=NULL;
        return;
        }
        Node* temp=head;
        while(temp->next!=tail){
        temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    
    void insert(int val,int pos){
        if(pos<0){
          cout<<"invalid\n";
          return;
        }
        if(pos==0){
           push_front(val);
           return;
        }
        Node* temp=head;
        for(int i=0;i<pos-1;i++){
          if(temp==NULL){
            cout<<"invalid\n";
            return;
           }
          temp=temp->next;
        }
        Node* newnode=new Node(val);
        newnode->next =temp->next;
        temp->next=newnode;
        
        if(newnode->next == NULL){
           tail = newnode;
        }
   }
   
   void print(){
      Node* temp=head;
      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
      
      }cout<<endl;
   }
   
   int search(int key){
       Node* temp=head;
       int idx=0;
       
       while(temp!=NULL){
         if(temp->data==key){
           return idx;
         }
         temp=temp->next;
         idx++;
       }
       return -1;
     }
 };
 
 int main(){
    list l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    
    //l.push_back(4);
    
    //l.pop_front();
    //l.pop_back();
    l.insert(4,1);
    
    
    l.print();
    cout<<l.search(4)<<endl;
    
    return 0;
 }
      
