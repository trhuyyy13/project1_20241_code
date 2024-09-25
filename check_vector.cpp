#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;  // Khai báo một vector kiểu int
    v.push_back(10);  // Thêm phần tử 10 vào vector
    v.push_back(20);  // Thêm phần tử 20 vào vector
    v.push_back(30);  // Thêm phần tử 30 vào vector

    // Duyệt qua các phần tử của vector bằng iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << endl;  // In giá trị mà iterator trỏ tới
    }

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    cout<<*(v.begin()+2);
    return 0;
}
