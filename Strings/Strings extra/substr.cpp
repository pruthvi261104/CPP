//Brute Force Approach
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int count=0;
  int maxlength=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int p=i;p<=j;p++){
        cout<<s[p]<<"";
      }
      count++;
      cout<<endl;
      if(s.size()>maxlength){
        maxlength=s.size();
      }

    }
  }
  cout<<count<<endl;
  cout<<maxlength;
}