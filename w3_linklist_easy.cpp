#include <iostream>
#include <list>
#include <algorithm>  // Để sử dụng hàm std::find

using namespace std;

int main() {
    int n;
    cin >> n;  

    list<int> l; 

    // Nhập danh sách ban đầu
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        l.push_back(x);  
    }

    string s;

    while (cin >> s) {
        if (s == "#") {
            break;
        }

        if (s == "addlast") {
            int k;
            cin >> k;
            // Chỉ thêm nếu phần tử chưa tồn tại
            if (find(l.begin(), l.end(), k) == l.end()) {
                l.push_back(k);
            }
        }

        if (s == "addfirst") {
            int k;
            cin >> k;
            // Chỉ thêm nếu phần tử chưa tồn tại
            if (find(l.begin(), l.end(), k) == l.end()) {
                l.push_front(k);
            }
        }

        if (s == "addafter") {
            int k1, k2;
            cin >> k1 >> k2;
            auto it = find(l.begin(), l.end(), k1);
            // Nếu k1 tồn tại và k2 chưa tồn tại, thêm k2 sau k1
            if (it != l.end() && find(l.begin(), l.end(), k2) == l.end()) {
                l.insert(++it, k2);
            }
        }

        if (s == "addbefore") {
            int k1, k2;
            cin >> k1 >> k2;
            auto it = find(l.begin(), l.end(), k1);
            // Nếu k1 tồn tại và k2 chưa tồn tại, thêm k2 trước k1
            if (it != l.end() && find(l.begin(), l.end(), k2) == l.end()) {
                l.insert(it, k2);
            }
        }

        if (s == "remove") {
            int k;
            cin >> k;
            auto it = find(l.begin(), l.end(), k);
            // Nếu phần tử k tồn tại, thực hiện xóa
            if (it != l.end()) {
                l.erase(it);
            } else {
                cout << "Phần tử " << k << " không tồn tại trong danh sách!" << endl;
            }
        }

        if (s == "reverse") {
            l.reverse();
        }
    }

    // In danh sách kết quả
    for (auto it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
