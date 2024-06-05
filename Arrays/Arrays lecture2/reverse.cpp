//reverse of arrray or vector in single pass
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//reverse part of vector or array function
void revPart(int i,int j,vector<int> &v){
  while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
  }
}
void reverse(int i,int j,vector<int> &v){
    i=0;
   j=v.size()-1;
  while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
  }
}
void display(vector <int> &v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}
int main(){
  vector <int> v;
  v.push_back(1);
  v.push_back(6);
  v.push_back(2);
  v.push_back(3);
  v.push_back(7);
  v.push_back(4);
  v.push_back(8);
  display(v);
  cout<<endl;
  int n=v.size();
  int k;
  cin>>k;
  if(k>n) k=k%n;
 
  //using in built function
  // reverse(v.begin(),v.end());
  cout<<endl;
  revPart(0,n-k-1,v);
  revPart(n-k,n-1,v);
  reverse(0,n-1,v);
  display(v);
}