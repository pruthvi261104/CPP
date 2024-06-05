// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int mid=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}