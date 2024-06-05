#include<iostream>
#include<vector>
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
  int p=-1;
  int ans[n-k+1];
  for(int i=0;i<n;i++){
    if(a[i]<0){
      p=i;
      break;
    }
  }
  if(p==-1) ans[0]=1;
  else ans[0]=a[p];
  int i=1;
  int j=k;
  while(j<n){
    if(p>=i) ans[i]=a[p];
    else{
      p=-1;
      for(int x=i;x<=j;x++){
        if(a[x]<0){
          p=x;
          break;
        }
      }
      if(p!=-1) ans[i]=a[p];
      else ans[i]=1;
    }
    i++;
    j++;
  }
  int size=sizeof(ans[0])/sizeof(ans);
  for(int l=0;l<size;l++){
    cout<<ans[i]<<" ";
  }

}