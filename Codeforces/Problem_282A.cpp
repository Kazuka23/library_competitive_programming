#include <iostream>
#include <string>
using namespace std;

int main() {
	int x = 0;
    int n;
    string c;
    cin >> n;

for (int i = 0; i < n; i++) {
        cin >> c;
        if(c == "X++" || c == "++X") {
            x = x + 1;
        } else {
            x = x - 1;
        }
    }
    cout << x;
}

 // https://codeforces.com/problemset/problem/282/A
