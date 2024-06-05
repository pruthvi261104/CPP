#include<iostream>
#include<vector>
using namespace std;
int main(){
  // vector <int> v(5);//vector with size 5
  // cout<<v.size();//here the size will be 5 because here whenever the size has been mentioned explicitly that means an array has created
  vector <int> v(5,25);//it specifies that a vector of size 5 has created and every part of the vector consists of element 25 for example here v[0]=25,v[1]=25 etc...
  cout<<v[0]<<" ";
  cout<<v[1]<<" ";
  cout<<v[2]<<" ";
  //25 25 25 this is the output for the following vector



}