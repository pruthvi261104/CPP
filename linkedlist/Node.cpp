#include <iostream>
#include <string.h>
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
// void display(Node *head)
// {
//   while (head!= NULL)
//   {
//     cout << head->val << " ";
//     head = head->next;
//   }
// }
//displaying using recursion
void display(Node* head){
  if(head==NULL)
   return;
  cout<<head->val<<" ";
  display(head->next);
}
void revDisplay(Node*head){
  if(head==NULL)
   return;
  revDisplay(head->next);
  cout<<head->val<<" ";
}
int count(Node *head)
{
  int n = 0;
  while (head != NULL)
  {
    n++;
    head = head->next;
  }
  return n;
}
int main()
{
  // Node a(10);
  // Node b(20);
  // Node c(40);
  // Node d(10);
  // a.next = &b;
  // b.next = &c;
  // c.next = &d;
  // d.next = NULL;
  // // a.next means b value
  // cout << ((a.next)->next)->val;
  // cout << ((a.next)->next)->next->val<<endl;
  Node *a = new Node(10);
  Node *b = new Node(20);
  Node *c = new Node(30);
  Node *d = new Node(40);
  Node *f = new Node(50);
  Node *g = new Node(60);
  Node *h = new Node(70);
  a->next = b;
  b->next = c;
  c->next = d;
  d->next=f;
  f->next=g;
  g->next=h;

  // Node*temp=a;
  // while(temp!=NULL){
  //   cout<<temp->val<<" ";
  //   temp=temp->next;
  // }
  display(a);
  cout << endl;
  int n = count(a);
  cout << "Size of linked list:" << n;
  cout<<endl;
  revDisplay(a);
}