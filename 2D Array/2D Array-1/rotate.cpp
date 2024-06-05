#include<iostream>
using namespace std;
int main(){
  int a[3][3]={{1,2,3},{8,9,4},{7,6,5}};
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
   for(int i=0;i<3;i++){
            for(int j=i+1;j<3;j++){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
   }
   for(int k=0;k<3;k++){
                int i=0;
                int j=2;
                while(i<=j){
                    int temp=a[k][i];
                    a[k][i]=a[k][j];
                    a[k][j]=temp;
                    i++;
                    j--;
                }
            }
            for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<a[i][j]<<" ";
    }
    cout<<endl;
  }


}









