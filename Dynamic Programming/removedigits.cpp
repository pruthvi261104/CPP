#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
vector<int> get_digits(int n){
  vector<int> result;
  while(n>0){
    if(n%10!=0){
      result.push_back(n%10);
    }
    n=n/10;//For reducing the number
  }
  return result;
}
vector<int> dp;
int f(int n){
  //Base cases 
  if(n==0) return 0;
  if(n<=9) return 1;
  if(dp[n]!=-1) return dp[n];
  //Now call the function get_digits as the function return type is vector now after calling the res store it in vector
  vector<int> d=get_digits(n);
  int result=INT_MAX;
  for(int i=0;i<d.size();i++){
     result=min(result,f(n-d[i]));
  }
  return dp[n]= 1+result;
}
//Bottom up approach
int fbu(int num){
  dp[0]=0;
  for(int i=1;i<=9;i++){
    dp[i]=1;
  }
  for(int n=10;n<=num;n++){
    //n->state 
    vector<int> d=get_digits(n);
    int result=INT_MAX;
    for(int i=0;i<d.size();i++){
      result=min(result,f(n-d[i]));
    }
    dp[n]=1+result;
  }
  return dp[num];
}
int main(){
  int n;
  cin>>n;
  dp.clear();
  dp.resize(1000005,-1);

  // cout<<f(n)<<endl;
  cout<<fbu(n)<<endl;
  return 0;
}