//here question is return the nearest power of 2 for the given number
//And this question and count set bits can be sloved using the "Bryan's Kelgar algo"
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int temp;
  while(n>0){
    temp=n;
    n=(n&(n-1));
  }
   cout<<temp;
}