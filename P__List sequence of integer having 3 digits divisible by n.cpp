#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    for(int i=1; i<=999;i++){
        if (i%a==0) cout<<i<<" "<<endl;
    }
}