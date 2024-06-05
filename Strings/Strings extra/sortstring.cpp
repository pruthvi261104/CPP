#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   string s="lEetcOde";
  //  sort(s.begin(),s.end());
  //  cout<<s;
   vector<int> v;
   for(char c: s){
    int val=static_cast<int>(c);
    v.push_back(val);
   }
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }

}