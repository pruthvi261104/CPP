#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<vector<ll>> dp;
ll f(vector<int> &sizes,vector<int> &value,int idx,int W){
    if(idx==sizes.size()) return 0;
    if(dp[idx][W]!=-1) return dp[idx][W];
    ll ans=0;
    //There will be two cases either u pick the weight or leave it
    //First case not pick when u are not picking anything just move the index by 1
    ans=max(ans,f(sizes,value,idx+1,W));
    //Now if u are picking something that means you have to remove the weight
    //from total weight and move index by 1 place
    //And other thing is that total weight less than or equal to the given weights
    //only then u can pick the weight
    if(sizes[idx]<=W){
        ans=max(ans,value[idx]+f(sizes,value,idx+1,W-sizes[idx]));
    }
    return dp[idx][W]=ans;
}
ll fbu(vector<int> &sizes,vector<int> &value,int W){
   dp.resize(105,vector<ll>(100005,0));
   int n=sizes.size();
   for(int idx=n-1;idx>=0;idx--){
    for(int j=0;j<=W;j++){
        ll ans=INT_MIN;
        //not pick
        ans=max(ans,dp[idx+1][j]);
        //pick
        if(sizes[idx]<=j){
            ans=max(ans,value[idx]+dp[idx+1][j- sizes[idx]]);
        }
        dp[idx][j]=ans;
    }
   }
   return dp[0][W]; 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        int W,n;
        cin>>W>>n;
        vector<int> sizes,value;
        for(int i=0;i<n;i++){
            int s,v;
            cin>>s>>v;
            sizes.push_back(s);
            value.push_back(v);
        }
        cout<<fbu(sizes,value,W)<<endl;
    }  
    return 0;
}