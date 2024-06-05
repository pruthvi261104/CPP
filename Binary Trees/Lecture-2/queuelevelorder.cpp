#include<iostream>
#include<queue>
using namespace std;
class Node{
  public:
  Node* right;
  Node* left;
  int val;
  Node(int val){
    this->right=NULL;
    this->left=NULL;
    this->val=val;
  }
};
void levelqueue(Node* root){//BFS
  queue <Node*> q;
  q.push(root);
  while(q.size()>0){
    Node* temp=q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left!=NULL) q.push(temp->left);
    if(temp->right!=NULL) q.push(temp->right);
  }
}
int main(){
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
  levelqueue(a);
}