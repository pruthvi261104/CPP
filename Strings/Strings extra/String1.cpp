#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  string s;
  cin>>s;
  //Finding palindrome without using extra space
  int start=0,end=s.size()-1;
  while(start<end){//O(n) time complexity
    if(s[start]!=s[end]){
      cout<<"Not a palindrome";
      return 0;
    }
    start++,end--;
  }
  cout<<"Palindrome";
  return 0;
}