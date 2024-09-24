#include<iostream>
using namespace std;

int main(){
    int n, a[999999];
    cin>>n;
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
}