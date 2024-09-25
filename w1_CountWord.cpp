#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string text, w;
    int w_count = 0;
    while (getline(cin, text)) {
        stringstream ss(text);
        while (ss >> w) {
            w_count++;
        }
    }
    cout << w_count << endl;

    return 0;
}
