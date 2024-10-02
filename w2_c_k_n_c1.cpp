#include<iostream>
using namespace std;

int C(int k, int n){
    if (k==0 || k ==n) return 1;
    int C1 = C(k-1, n-1);
    int C2 = C(k, n-1);
    return C1+C2;
}
int main (){
    double n,k;
   cin>>k>>n;
   cout << C(k,n);
}