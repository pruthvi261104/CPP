#include<iostream>
#include<string>
using namespace std;
int main(){
  // string str;
  // cin>>str;
  // int count=0;
  // for(int i=0;i<str.length();i++){
  //   if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'  || str[i]=='u'){
  //     cout<<str[i]<<" ";
  //     count++;
  //   }
  // }
  // cout<<count;
  //instead we can use loop in these way
  // while(str[i]!='\0'){
  //   i++;//to iterate through each element
  // }
  //Mutability of strings
  string str="pruthvi";
  cout<<str;
  cout<<endl;
  str[2]='i';
  cout<<str;  
}