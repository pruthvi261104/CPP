#include<iostream>
#include<map> 
using namespace std;
int main(){
  map<int,string> m;
  m[12]="pruthvi";
  m[1]="saketh";
  m[69]="tharun";
  m[19]="abhi";
  for(auto p:m){
    cout<<p.first<<"."<<p.second<<endl;
  }

}