#include<iostream>
using namespace std;
int main(){
  int a[]={1,2,4,3};
  int* ptr=a;
  for(int i=0;i<4;i++){
    cout<<ptr[i]<<" ";
  }
  //ptr[0]=25;//dereferencing that means we can change the values of the array using pointers
  cout<<endl;
  //  for(int i=0;i<4;i++){
  //   cout<<ptr[i]<<" ";
  // }
  //Another way to print the elements using pointers
  for(int i=0;i<4;i++){
    cout<<*ptr<<" ";//
    ptr++;
  }

}