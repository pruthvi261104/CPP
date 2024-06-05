#include<iostream>
#include<vector>
using namespace std;
void change(vector <int> &a){//we can simply convert the pass by value to pass by reference using '&' operator
  a[0]=100;
  
}
int main(){
  vector <int> v;
  v.push_back(10);
  v.push_back(291);
  v.push_back(30);
  v.push_back(34);
  v.push_back(12);
  v.push_back(9);
  cout<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  change(v);
  cout<<endl;//here even though we are trying to change the value of the particular index it is not happening that is because of "In vectors they are passed by value but not by reference"
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }

}