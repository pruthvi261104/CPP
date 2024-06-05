#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void skip(string ans,string org){
   if(org.length()==0){
    cout<<ans;
    return;
   }
   char ch=org[0];
   if(ch=='a') skip(ans,org.substr(1));
   else skip(ans+ch,org.substr(1));
}
int main(){
   string str;
   cin>>str;
   skip("",str);
}
