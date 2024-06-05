#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
  int a,b;
  cin>>a>>b;
  // cout<<gcd(min(a,b),max(a,b));//Among these three statements anything can work
  // cout<<gcd(a,b);
  cout<<gcd(b,a);
  
}