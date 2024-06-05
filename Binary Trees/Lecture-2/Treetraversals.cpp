#include <iostream>
using namespace std;
class Node
{
public:
  Node *right;
  Node *left;
  int val;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
void PreOrderdisplay(Node* root){
  if(root==NULL) return;
  cout<<root->val<<" ";
  PreOrderdisplay(root->left);
  PreOrderdisplay(root->right); 
}
void InOrderdisplay(Node* root){
  if(root==NULL) return;
  InOrderdisplay(root->left);
  cout<<root->val<<" ";
  InOrderdisplay(root->right); 
}
void PostOrderdisplay(Node* root){
  if(root==NULL) return;
  PostOrderdisplay(root->left);
  PostOrderdisplay(root->right);
  cout<<root->val<<" "; 
}
int main()
{
  Node *a = new Node(1);
  Node *b = new Node(2);
  Node *c = new Node(3);
  Node *d = new Node(4);
  Node *e = new Node(5);
  Node *f = new Node(6);
  Node *g = new Node(7);
  a->left=b;
  a->right=c;
  b->left=d;
  b->right=e;
  c->right=g;
  c->left=f;
  PreOrderdisplay(a);
  cout<<endl;
  InOrderdisplay(a);
  cout<<endl;
  PostOrderdisplay(a);
  cout<<endl;

}