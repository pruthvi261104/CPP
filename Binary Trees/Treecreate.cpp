#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class Node{
  public:
  Node* left;
  Node* right;
  int val;
  Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
  }
};
void display(Node* root){
  if(root==NULL) return;
  cout<<root->val<<" ";
  display(root->left);
  display(root->right);
}
int sum(Node* root){
  if(root==NULL) return 0;
  return root->val+sum(root->left)+sum(root->right);
}
int displaylength(Node* root){
  if(root==NULL) return 0;
 return 1+displaylength(root->left)+displaylength(root->right);
}
int findmax(Node* root){
  if(root==NULL) return INT_MIN;
  // int maxval=root->val;
  // int leftmax=findmax(root->left);
  // int rightmax=findmax(root->right);
  // maxval=max(maxval,leftmax);
  // maxval=max(maxval,rightmax);
  //Another approach
  int lmax=findmax(root->left);
  int rightmax=findmax(root->right);
  return max(root->val,max(lmax,rightmax));
}
int level(Node* root){
  if(root==NULL) return 0;
  return 1+max(level(root->left),level(root->right));
}
int main(){
  Node* a=new Node(2);
  Node* b=new Node(3);
  Node* c=new Node(4);
  Node* d=new Node(25);
  Node* e=new Node(6);
  Node* f=new Node(7);
  Node* g=new Node(8);
  a->left=b;
  a->right=c;
  b->left=d;
  b->right=e;
  c->right=g;
  c->left=f;
  display(a);
  cout<<endl;
  cout<<sum(a);
  cout<<endl;
  cout<<displaylength(a);
  cout<<endl;
  cout<<findmax(a);
  cout<<endl;
  cout<<level(a);
}