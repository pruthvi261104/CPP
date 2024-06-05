#include <bits/stdc++.h>
using namespace std;
void bubblesort(int n,int a[]){
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                count++;
            }
        }
    }
    // if(count==0) cout<<"0"<<endl;
    cout<<count<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(n,a);
}
