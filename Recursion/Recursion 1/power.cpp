#include<iostream>
using namespace std;
//this is using normal for loop
int power(int a,int b){
  if(a==0 && b==0){
    cout<<"Undefined";
    return -100;
  }
  if(a==0){
    return 0;
  }
  int p=1;
  for(int i=1;i<=b;i++){
    p*=a;
  }
  return p;
}
//Now using recursion
int powerrec(int a,int b){
  if(b==0) return 1;
  else{
    return a*powerrec(a,b-1);
  }
}
int main(){
  int a,b;
  cin>>a>>b;
  int r=powerrec(a,b);
  cout<<r;
}