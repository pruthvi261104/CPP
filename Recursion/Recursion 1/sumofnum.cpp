#include<iostream>
using namespace std;
void print(int sum,int n){
  if(n==0){
    cout<<sum<<endl;
    return;
  }
  else{
    print(sum+n,n-1);
  }
}
int main(){
  int sum;
  cin>>sum;
  int n;
  cin>>n;
  print(sum,n);
}