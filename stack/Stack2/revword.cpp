#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cin>>s;
  int n=s.length();
  stack<char> st;
  for(int i=0;i<n;i++){
      st.push(s[i]);
  }
  string revstring;
  while(!st.empty()){
    revstring+=st.top();
    st.pop();
  }
  cout<<revstring<<endl;
  if(s==revstring) cout<<"Palindrome";
  else cout<<"Not a palindrome";

}
