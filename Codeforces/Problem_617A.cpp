#include <iostream>
using namespace std;

int main() {
    int x = 0;
    cin >> x;

    int langkah = x / 5;

    if (x % 5 != 0) {
        langkah = langkah + 1;
    }

    cout << langkah;
}
// https://codeforces.com/problemset/problem/617/A
