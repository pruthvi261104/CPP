#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  // string s;
  // s="pruthvi";
  // cout<<s.substr(1);//prints all char from the given index output:ruthvi
  // cout<<endl;
  // cout<<s.substr(2,4);//prints the substring of length 4 which includes the given string also output uthv
  string s;
  cin>>s;
  int n=s.length();
  // int p=n/2;
  cout<<s.substr(n/2);
  return 0;
}