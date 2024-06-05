#include <bits/stdc++.h>
#include<stack>
#include<algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // int t;
    // cin>>t;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pgi[n];
        pgi[0]=-1;
        stack <int> st;
        st.push(0);
        for(int i=0;i<n;i++){
            while(st.size()>=0 && a[st.top()]<=a[i]) st.pop();
            if(st.empty()) pgi[i]=-1;
            else pgi[i]=st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++){
            pgi[i]=i-pgi[i];
        }
        for(int i=0;i<n;i++){
            cout<<pgi[i]<<" ";
        }
        cout<<endl;
    return 0;
}