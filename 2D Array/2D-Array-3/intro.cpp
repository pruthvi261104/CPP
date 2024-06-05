#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> v1;
  v1.push_back(2);
  v1.push_back(4);
  v1.push_back(6);
  v1.push_back(28);

  vector<int> v2;
   v2.push_back(23);
   v2.push_back(25);
   v2.push_back(28);
   
   vector<int> v3;
    v3.push_back(12);
    v3.push_back(22);
    v3.push_back(32);
    vector<vector<int>> v;
    v.push_back(v1);//here we cannot pushback ele here we can only pushback the vectors
    v.push_back(v2);
    v.push_back(v3);
    cout<<v[0][1];

}