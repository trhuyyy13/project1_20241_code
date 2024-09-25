#include<iostream>
#include<string>

using namespace std;

int main() {
    string s1,s2,s3;

    getline(cin,s1); 
    getline(cin,s2);
    getline(cin,s3);

    size_t vitri = 0;
    vitri=s3.find(s1);  //vi tri dau tien s1 trong s3
    while (vitri != string::npos) {
        s3.replace(vitri, s1.length(), s2); //thay the
        vitri = s3.find(s1, vitri + s2.length()); // tim vi tri tiep theo
    }
    
    cout<<s3;
    return 0;
}
