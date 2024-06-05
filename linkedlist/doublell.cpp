#include <iostream>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node* pre;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->pre=NULL;
  }
};
void display(Node* head){ //T.C->O(1)
  Node* temp=head;
  while(temp){
    cout<<temp->val<<" ";
    temp=temp->next; 
  }
}
//display function using recursion (normal)
void displayrec(Node* head){ //T.C->O(N) due to stack calls
  Node* temp=head;
  if(head==NULL) return;
  //here first print then call
    cout<<temp->val<<" ";
    displayrec(temp->next);

}
//display function using recursion (reverse)
void displayrecrev(Node* head){//T.C->O(N)
  Node* temp=head;
  if(head==NULL) return;
  //here first call then print
  displayrecrev(temp->next);
  cout<<temp->val<<" ";
}
void displayrev(Node* tail){//T.C->O(1)
  Node* temp=tail;
  while(temp){
    cout<<temp->val<<" ";
    temp=temp->pre;
  }
}
int main(){
  Node* a=new Node(10);
  Node* b=new Node(20);
  Node* c=new Node(30);
  Node* d=new Node(40);
  Node* e=new Node(50);
  a->next=b;
  b->next=c;
  c->next=d;
  d->next=e;
  e->pre=d;
  d->pre=c;
  c->pre=b;
  b->pre=a;
  display(a);
  cout<<endl;
  displayrec(a);
  cout<<endl;
  displayrecrev(a);
  cout<<endl;
  displayrev(e);
}