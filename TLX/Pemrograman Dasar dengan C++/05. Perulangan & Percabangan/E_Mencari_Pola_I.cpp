#include <iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int c = i; c < N; c++) {
            cout << ".";
        }

        cout << endl;
    }
}
