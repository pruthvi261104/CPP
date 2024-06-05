#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cin>>s;
  reverse(s.begin()+1,s.begin()+5);
  cout<<s;
  return 0;
}