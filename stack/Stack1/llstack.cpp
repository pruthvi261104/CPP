#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val=val;
    this->next=NULL;
  }
};
  class Stack{
    public:
    Node* head;
    int size;
    Stack(){
      head=NULL;
      size=0;
    }
    void push(int val){
      Node* temp=new Node(val);
      temp->next=head;
      head=temp;
      size++;
    }
    int pop(){
      if(head==NULL){
        cout<<"Stack UnderFlow";
        return -1;
      }
      head=head->next;
      size--;
    }
    int top(){
      if(head==NULL){
        cout<<"Stack Underflow";
        return -1;
      }
      return head->val;
    }
    // void display(){
    //   Node* temp=head;
    //   while(temp){
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    //   }
    //   cout<<"\n";
    // }
    //If we want to display the ele in reverse order we can do it using recursion
    void print(Node* temp){
      if(temp==NULL){
        return;
      }
      print(temp->next);
      cout<<temp->val<<" ";
    }
    void display(){
      Node* temp=head;
      print(temp);
      cout<<endl;
    }
  };
int main(){
  Stack s;
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  cout<<s.top()<<endl;
  cout<<s.size<<endl;
  s.display();
 
  



}