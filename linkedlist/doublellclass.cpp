#include <iostream>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node *pre;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->pre=pre;
  }
};
class doublell
{
public:
  Node *head;
  Node *tail;
  int size;
  doublell()
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
        temp->pre=tail;
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
      head->pre=temp;
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
      t->pre=temp;
      t->next->pre=t;
      size++;
    }
  }
  int getatIdx(int idx){
    if(idx<0 || idx>=size) cout<<"Invalid case";
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
      if(idx>size/2){
        Node* temp=head;
      for(int i=1;i<=idx;i++){
        temp=temp->next;
      }
      return temp->val;
      }else{
        Node* temp=tail;
        for(int i=1;i<=size-idx;i++){
          temp=temp->pre;
        }
        return temp->val;

      }
    }
  }
  void deleteBegin(){
    if(size==0){
     cout<<"List is empty";
     return;
    }
    head=head->next;
    if(head) head->pre=NULL;
    if(head==NULL) tail=NULL;
    size--;
  }
  void deleteEnd(){
    if(size==0){
      cout<<"List is Empty";
      return;
    }
    else if(size==1){
      deleteBegin();
      return;
    }
    else{
      Node*temp=tail->pre;
      temp->next=tail->next;//or temp->next=NULL
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
      temp->next->pre=temp;
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
  doublell dl;
  dl.insertBegin(10);
  dl.insertBegin(20);
  dl.insertAtEnd(30);
  dl.insertIdx(2,50);
  dl.insertIdx(2,25);
  dl.insertAtEnd(100);
  dl.display();
  cout<<dl.getatIdx(2);

}