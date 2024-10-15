#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<char> stk;  // Sử dụng stack của C++ STL

bool match(char open, char close) {
    if (open == '(' && close == ')') return true;
    if (open == '[' && close == ']') return true;
    if (open == '{' && close == '}') return true;
    return false;
}

bool check(const string& s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stk.push(s[i]);  
        } else {
            if (stk.empty()) return false;  
            char open = stk.top();  
            stk.pop(); 
            if (!match(open, s[i])) return false;  
        }
    }
    return stk.empty();  
}

int main() {
    string s;
    cin >> s;
    bool ans = check(s);
    cout << ans << endl;
}
