#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.length() < 10) {
        cout << "INCORRECT";
        return 0;
    }
    if (s[4] != '-' || s[7] != '-') {
        cout << "INCORRECT";
        return 0;
    }
    int num5 = s[5] - '0';
    int num8 = s[8] - '0';

    if (num5 < 0 || num5 > 9 || num8 < 0 || num8 > 9) {
        cout << "INCORRECT";
        return 0;
    }
    int month = stoi(s.substr(5, 2));  // Lấy chuỗi từ s[5] và s[6] rồi chuyển thành số
    int day = stoi(s.substr(8, 2));    // Lấy chuỗi từ s[8] và s[9] rồi chuyển thành số
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "INCORRECT";
        return 0;
    }
    if (num5 > 0 && num8 > 0)
        cout << s[0] << s[1] << s[2] << s[3] << " " << s[5] << s[6] << " " << s[8] << s[9];
    else if (num5 <= 0 && num8 > 0)
        cout << s[0] << s[1] << s[2] << s[3] << " " << s[6] << " " << s[8] << s[9];
    else if (num5 > 0 && num8 <= 0)
        cout << s[0] << s[1] << s[2] << s[3] << " " << s[5] << s[6] << " " << s[9];
    else if (num5 <= 0 && num8 <= 0)
        cout << s[0] << s[1] << s[2] << s[3] << " " << s[6] << " " << s[9];

    return 0;
}
