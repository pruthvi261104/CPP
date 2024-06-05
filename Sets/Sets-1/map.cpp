#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  unordered_map <int,string> m;
  pair<int,string> p1;//int->key,string->value,map<key,value> m
  //Not good approach for insertion
  // p1.first=1;
  // p1.second="pruthvi";
  // pair<int,string> p2;
  // p2.first=2;
  // p2.second="Tharun";
  // pair<int,string> p3;
  // p3.first=3;
  // p3.second="Sai charan";
  // m.insert(p1);
  // m.insert(p2);
  // m.insert(p3);
  //Somewhat good approach for insertion
  m[1]="pruthvi";
  m[2]="Tharun";
  m[3]="Saketh";
  m[4]="Charan";
  for(auto p: m){
      cout<<p.first<<"."<<p.second<<endl;
  }
  cout<<m.size();
  //For deleting or erasing elements do this
  m.erase(1);
  cout<<endl;
  for(auto p:m){
    cout<<p.first<<"."<<p.second<<endl;
  }
  cout<<m.size();
  cout<<m[3];
}