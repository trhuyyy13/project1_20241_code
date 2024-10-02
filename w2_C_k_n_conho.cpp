#include<iostream>
const long long MAX = 1000;
const long long MOD = 1000000007;
using namespace std;
long long m[MAX][MAX];
long long C(int k, int n){
    if (k==0 || k==n){
        return 1;
    }
    else{
        if(m[k][n]==-1){
            m[k][n] = (C(k-1,n-1) + C(k,n-1))%MOD;
        }
    }
    return m[k][n];
}

int main (){
    int n,k;
    cin>>k>>n;
    for (int i=0;i<MAX;i++){
        for (int j=0;j<MAX;j++){
            m[i][j]=-1;
        }
    }
    cout << C(k,n);
    return 0;
    
}