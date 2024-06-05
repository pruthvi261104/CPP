//question is generate all binary strings without consecutive 1's
#include<iostream>
using namespace std;
void helper(string s,int n){
  if(n==0){
    cout<<s<<endl;
    return;
  }
  helper(s+'0',n-1);
  if(s=="" || s[s.length()-1]=='0'){
    helper(s+'1',n-1);

  }
}
int main(){
  int n;
  cin>>n;
  string s;
  helper("",n);
}