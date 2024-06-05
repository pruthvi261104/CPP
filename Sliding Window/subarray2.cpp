
//important
#include<iostream>
#include<limits>
#include <climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int k;
  cin>>k;
  int presum=0;
  int maxSum=0;
  int maxidx=0;
  for(int i=0;i<k;i++){
    presum+=a[i];
  }
  maxSum=presum;
  int i=1;
  int j=k;
  while(j<n){
    int currsum=presum+a[j]-a[i-1];
    if(maxSum<currsum){
      maxSum=currsum;
      maxidx=i;
    }
    presum=currsum;
    i++;
    j++;
  }
  cout<<maxSum<<" "<<maxidx;
}
