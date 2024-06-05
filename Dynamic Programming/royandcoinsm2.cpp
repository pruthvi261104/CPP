//This is the problem from hackerearth and this is method for the prblm
#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<limits>
#include<algorithm>
using namespace std;
int main()
{
  int n;//No.of boxes
  cin>>n;
  vector<int> f(n+10,0); //here actual indexing starts from 1 that's why declared size from n+1 but not n
  int m;//no.of queries
  cin>>m;
  for(int i=0;i<m;i++){
    int L,R;
    cin>>L>>R;
    f[L]++;//in vector l go to 'L' idx and increment it
    f[R+1]--;
  }
  //Calculate prefix sum
  for(int i=1;i<f.size();i++){
    f[i]=f[i]+f[i-1];
  }
  vector<int> c(10000005,0);//this is the vector which returns the answer
  for(int i=0;i<=n;i++){
    int coins=f[i];//from f[i] extract how many coins are present at each index
    c[coins]++;//now update the coins value like if no of coins present in f[2] and f[6] are 2 then in c[2] update the value with 2 that indicates there are 2 boxes with atleast two or more coins
  }
  //Now calculate the suffix sum for final ans
  for(int i=c.size()-2;i>=0;i--){
    c[i]=c[i]+c[i+1];
  }
  int q;//no of queries
  cin>>q;
  while(q--){
     int num;
     cin>>num;
     cout<<c[num]<<endl;
  }
 return 0;
}