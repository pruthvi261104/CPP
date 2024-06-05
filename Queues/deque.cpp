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
class Deque
{
public:
  Node *head;
  Node *tail;
  int size;
  Deque()
  {
    head = tail = NULL;
    size = 0;
  }
  void push_back(int val)
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
  void push_front(int val){
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
  void pop_front(){
    if(size==0){
     cout<<"List is empty";
     return;
    }
    head=head->next;
    if(head) head->pre=NULL;
    if(head==NULL) tail=NULL;
    size--;
  }
  void pop_back(){
    if(size==0){
      cout<<"List is Empty";
      return;
    }
    else if(size==1){
      pop_front();
      return;
    }
    else{
      Node*temp=tail->pre;
      temp->next=tail->next;//or temp->next=NULL
      tail=temp;
      size--;
    }
  }
  void display(){
   Node* temp=head;
    if(size==0){
      cout<<"Queue is empty"<<endl;
    }else{
      while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
      }
      cout<<endl;
    }
  }
  int front(){
    if(size==0){
      cout<<("Queue is Empty");
      return -1;
    }
    return head->val;
  }
  int back(){
    if(size==0){
      cout<<("Queue is Empty");
      return -1;
    }
    return tail->val;
  }
  int length(){
    return size;
  }
  bool isEmpty(){
   return size==0;
  }
};
int main(){
  Deque d;
  d.push_back(10);
  d.push_back(20);
  d.push_back(30);
  d.push_front(50);
  d.push_front(75);
  d.pop_back();
  d.pop_back();
  d.pop_front();
  d.display();
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  cout<<d.length();

}