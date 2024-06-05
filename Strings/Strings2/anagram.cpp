// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//   string s;
//   cin>>s;
//   string t;
//   cin>>t;
//   sort(s.begin(),s.end());
//   sort(t.begin(),t.end());
//   if(s==t) cout<< true;
//   else cout<< false;
// }
#include <bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){ 
    string s;
    cin>>s;
    string t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    }
}