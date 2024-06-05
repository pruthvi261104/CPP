#include <iostream>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
class LinkedList
{
public:
  Node *head;
  Node *tail;
  int size;
  LinkedList()
  {
    head = tail = NULL;
    size = 0;
  }
  void insertAtEnd(int val)
  {
      Node* temp=new Node(val);
      if(size==0){
        head=tail=temp;
      }else{
        tail->next=temp;
        tail=temp;
      }
      size++;
  }
  void insertBegin(int val){
    Node* temp=new Node(val);
    if(size==0){
      head=tail=temp;
    }else{
      temp->next=head;
      head=temp;
    }
    size++;
  }
  void insertIdx(int idx,int val){
    if(idx<0 || idx>size) cout<<"Invalid"<<endl;
    else if(idx==0) insertBegin(val);
    else if(idx==size) insertAtEnd(val);
    else{
      Node* t=new Node(val);
       Node* temp=head;
      for(int i=1;i<=idx-1;i++){
        temp=temp->next;
      }
      t->next=temp->next;
      temp->next=t;
      size++;
    }
  }
  int getatIdx(int idx){
    if(idx<0 || idx>=size) cout<<"Invalid case";
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
      Node* temp=head;
      for(int i=0;i<idx-1;i++){
        temp=temp->next;
      }
      return temp->val;
    }
  }
  void deleteBegin(){
    if(size==0){
     cout<<"List is empty";
     return;
    }
    head=head->next;
    size--;
  }
  void deleteEnd(){
    if(size==0){
      cout<<"List is Empty";
      return;
    }else{
      Node*temp=head;
      while(temp->next!=tail){
        temp=temp->next;
      }
      temp->next=NULL;
      tail=temp;
      size--;
    }
  }
  void deleteIdx(int idx){
    if(idx<0 || idx>=size){
      cout<<"Invalid case";
      return;
    }
    else if(idx==0) return deleteBegin();
    else if(idx==size-1)  return deleteEnd();
    else{
      Node* temp=head;
      for(int i=0;i<idx-1;i++){
        temp=temp->next;
      }
      temp->next=temp->next->next;
      size--;

    }
  }
  void display(){
   Node* temp=head;
    if(size==0){
      cout<<"Linkedlist is empty"<<endl;
    }else{
      while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
      }
      cout<<endl;
    }
  }
};
int main(){
  LinkedList ll;
  ll.insertAtEnd(10);
  ll.insertAtEnd(20);
  ll.insertAtEnd(30);
  ll.insertAtEnd(40);
  ll.insertBegin(75);
  ll.insertBegin(85);
  ll.insertBegin(95);
  ll.insertBegin(105);
  ll.display();
  // cout<<ll.size;
  // ll.insertIdx(4,25);
  // ll.display();
  // // cout<<ll.getatIdx(3);
  // ll.deleteBegin();
  // ll.display();
  // ll.deleteEnd();
  // ll.display();
  // ll.deleteIdx(4);
  // ll.display();
  // ll.deleteIdx(5);
  // ll.display();
  ll.insertIdx(5,100);
  ll.display();
  ll.deleteIdx(5);
  ll.display();
}