#include <iostream>
using namespace std;

int b[9][9], s = 0;

bool k(int r, int c, int n) {
    for (int i = 0; i < 9; i++) if (b[r][i] == n || b[i][c] == n) return false;
    int sr = r - r % 3, sc = c - c % 3;
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) if (b[i + sr][j + sc] == n) return false;
    return true;
}

void t(int r, int c) {
    if (r == 9) { s++; return; }
    if (c == 9) { t(r + 1, 0); return; }
    if (b[r][c] != 0) { t(r, c + 1); return; }
    for (int n = 1; n <= 9; n++) {
        if (k(r, c, n)) {
            b[r][c] = n;
            t(r, c + 1);
            b[r][c] = 0;
        }
    }
}

int main() {
    for (int i = 0; i < 9; i++) for (int j = 0; j < 9; j++) cin >> b[i][j];
    t(0, 0);
    cout << s << endl;
    return 0;
}
