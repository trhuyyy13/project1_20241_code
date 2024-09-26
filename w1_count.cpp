#include<iostream>
using namespace std;

int main(){
    int n,a[100000];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int dem_c=0, dem_l=0;
    for (int i=0;i<n;i++){
        if (a[i]%2==0) dem_c++;
        else dem_l++;
    }
    cout<<dem_l<<" "<<dem_c;
}