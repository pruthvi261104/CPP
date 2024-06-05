#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storesubsets(string ans,string org,vector<string> &v){
   if(org==""){
     v.push_back(ans);
     return;
   }
   char ch=org[0];
   storesubsets(ans+ch,org.substr(1),v);
   storesubsets(ans,org.substr(1),v);
}
int main(){
  string s;
  cin>>s;
  string ans="";
  vector<string> v;
  storesubsets(ans,s,v);
  for(string ele: v){
    cout<<ele<<" "<<endl;
  }
}