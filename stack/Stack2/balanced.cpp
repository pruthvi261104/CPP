#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool balanced(string s){
  if(s.length()%2!=0) return false;
  stack <char> st;
  for(int i=0;i<s.length();i++){
    if(s[i]=='('||s[i]=='{'|| s[i]=='[') st.push(s[i]);
    else{
      if(st.size()==0) return false;
      else if(st.top()+1==s[i]|| st.top()+2==s[i]) st.pop();
      else return false;
    }
  }
  return st.empty();
}
int main(){
    string s;
    cin>>s;
    if(balanced(s)) cout<<"true";
    else cout<<"false";
}