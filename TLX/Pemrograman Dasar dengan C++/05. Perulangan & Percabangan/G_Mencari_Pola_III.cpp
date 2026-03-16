#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        for (int c = 1; c <= N; c++) {
            if (c == i || c == N+1-i) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}
