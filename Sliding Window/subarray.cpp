#include<iostream>
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
  int maxSum=0;
  int maxidx=-1;
  for(int i=0;i<=n-k;i++){
       int sum=0;
       for(int j=i;j<i+k;j++){
        sum+=a[j];
       }
      if(maxSum<sum){
        maxSum=sum;
        maxidx=i;
      }
  }
  cout<<maxSum<<maxidx<<" "<<endl;

}