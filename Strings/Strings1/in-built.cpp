#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  // string str;
  // cin>>str;
  // string rev=str;
  // reverse(str.begin(),str.end());
  // if(str==rev) cout<<"Palindrome";
  // else cout<<"Not a palindrome";
  string str="pruthvi";
  reverse(str.begin()+2,str.end()-2);
  cout<<str;
}