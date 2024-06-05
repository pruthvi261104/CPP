#include<iostream>
#include<cmath>
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
int levels(Node* root){
  if(root==NULL) return 0;
  return 1+max(levels(root->left),levels(root->right));
}
void display(Node* root,int curr,int require){
   if(root==NULL) return;
  //  curr=1;
   if(curr==require) {//More optimised because after finding required element there will be no calls 
    cout<<root->val<<" ";
    return;
   }
   display(root->left,curr+1,require);
   display(root->right,curr+1,require);
}
void revdisplay(Node* root,int curr,int require){
   if(root==NULL) return;
  //  curr=1;
   if(curr==require) {//More optimised because after finding required element there will be no calls 
    cout<<root->val<<" ";
    return;
   }
   display(root->right,curr+1,require);
   display(root->left,curr+1,require);
}
void printlevels(Node* root){
  int height=levels(root);
  for(int i=1;i<=height;i++){
    revdisplay(root,1,i);
    cout<<endl;
  }
}

int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    // display(a,1,1);
    printlevels(a);


}