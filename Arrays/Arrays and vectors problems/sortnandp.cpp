#include <iostream>
#include <vector>
using namespace std;
void sort01(int i,int j,vector<int> &v)
{
  int n = v.size();
   i = 0;
   j =n- 1;
  while(i<j)
  {
    if (v[i]<0) i++;
    if(v[j]>0) j--;
    if(i>j) break;
    if(v[i]>0 && v[j]<0){
      int temp=v[i];
      v[i]=v[j];
      v[j]=temp;
      i++;
      j--;
    }
  }
  
}
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(-2);
  v.push_back(3);
  v.push_back(-4);
  v.push_back(-5);
  v.push_back(6);
  v.push_back(8);
  sort01(0,v.size()-1,v);
  for (int i = 0; i < v.size(); i++)
  {
    cout <<v[i]<<" ";
  }
}