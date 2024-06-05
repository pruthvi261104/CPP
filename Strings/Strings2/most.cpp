#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  //M-1->Most optimised approach
  // string s;
  // cin>>s;
  // int a[26]={0};
  // for(int i=0;i<s.length();i++){
  //   char ch=s[i];
  //   int ascii=(int)ch;
  //   a[ascii-97]++;
  // }
  // int max=0;
  // for(int i=0;i<26;i++){
  //   if(a[i]>max)  max=a[i];
  // }
  // for(int i=0;i<26;i++){
  //   if(a[i]==max){
  //     int ascii=i+97;
  //     char ch=(char)ascii;
  //     cout<<ch<<" "<<max;
  //   }
  // }
  //M2->Brute Force Approach
  string s;
  cin>>s;
  int max=0;
  int count=0;
  for(int i=0;i<s.length();i++){
    char ch=s[i];
    count=1;
    for(int j=i+1;j<s.length();j++){
      if(s[i]==s[j]) count++;
    }
    if(max<count) max=count;
  }
  for(int i=0;i<s.length();i++){
     char ch=s[i];
    for(int j=i+1;j<s.length();j++){
      if(s[i]==s[j]) count++;
    }
    if(count==max) cout<<ch<<" "<<count;
  }

}