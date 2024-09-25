#include<iostream>
using namespace std;

int main(){
    int n,k;
    int a[100000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s;
    int dem=0;
    for(int j=0;j<n;j++){
        s = s+a[j];
        if(j>=k) s=s-a[j-k];
        if (j>=k-1 && s%2==0) dem++;

    }
    cout<<dem;
}