#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int neg[n];
  stack <int> st;
  neg[0]=-1;
  st.push(a[0]);
  for(int i=0;i<n;i++){
    while(st.size()>0 && st.top()<=a[i]) st.pop();
    if(st.size()==0) neg[i]=-1;
    else neg[i]=st.top();
    st.push(a[i]);
  }
  for(int i=0;i<n;i++){
    cout<<neg[i]<<" ";
  }

}