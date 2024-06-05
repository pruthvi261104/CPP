#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
  string input;
        getline(cin,input);
        string a,b;
        size_t pos=input.find(' ');
        if(pos!=string::npos){
            a=input.substr(0,pos);
            b=input.substr(pos+1);
        }else{
            a=input;
            b="";
        }
  cout<<a<<b;
}