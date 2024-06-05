#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

vector<int> coins;
vector<int> dp(1000005,-2);


int f(int x){
  //Base case
  if(x==0) return 0;
  if(dp[x]!=-2) return dp[x];
  int result=INT_MAX;
  for(int i=0;i<coins.size();i++){
    if(x-coins[i]<0) continue;//that means if if coins[i] value is greater than the x value
    result=min(result,f(x-coins[i]));
  }
  //if res is not calculated
  if(result==INT_MAX) return dp[x]=INT_MAX;
  return dp[x]=1+result;
}
int main(){
  int n,x;
  cin>>n>>x;
  for(int i=0;i<n;i++){
    int num;
    cin>>num;
    coins.push_back(num);
  }
  int ans=f(x);
  if(ans==INT_MAX) cout<<"-1"<<endl;
  else cout<<ans<<endl;
  return 0;
}