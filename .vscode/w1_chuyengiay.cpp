#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;

    if(s.length()!=8){
        cout<<"INCORRECT";
        return 0;
    }

    if(s[2] != ':' || s[5] != ':'){
        cout<<"INCORRECT";
        return 0;
    }

    int gio = stoi(s.substr(0,2));
    int phut = stoi(s.substr(3,2));
    int giay = stoi(s.substr(6,2));

    if (gio>24 || phut >60 || giay >60 ){
        cout<<"INCORRECT";
        return 0;
    }
    cout<<gio*60*60+phut*60+giay;

}