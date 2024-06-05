#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void balance(string s,int open,int close,int n){
  if(close==n){
    cout<<s<<endl;
    return;
  }
  if(open<n) balance(s+'(',open+1,close,n);
  if(close<open) balance(s+')',open,close+1,n);
}
int main(){
   int n;
   cin>>n;
   balance("",0,0,n);
}