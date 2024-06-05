#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s;
  s="aaaabbbacccc";
 const int count=256;
 int frequency[count];
 for(char c:s){
  frequency[c]++;
 }
 string sp="";
 for(char c:s){
  for(int i=0;i<s.length();i++){
  if(frequency[i]%2==0){
    sp+=c;
  }
  }
}
  for(int i=0;i<sp.length();i++){
    cout<<sp;
  }
 }