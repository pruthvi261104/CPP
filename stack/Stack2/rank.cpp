#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // int t;
    // cin>>t;
        string s;
        cin>>s;
        string org=s;
        sort(s.begin(),s.end());
        vector<string> v;
        do{
            v.push_back(s);
        }while(next_permutation(s.begin(),s.end()));
        for(int i=0;i<v.size();i++){
            if(v[i]==org){
                 cout<<i+1;
                 break;
            }
        }
        cout<<endl;
}