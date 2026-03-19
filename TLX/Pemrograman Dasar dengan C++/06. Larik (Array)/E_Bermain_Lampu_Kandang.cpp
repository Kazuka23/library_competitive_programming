#include <iostream>
using namespace std;

int main() {
    bool lampu[101];

    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    for (int p = 1; p <= 10; p++) {
        for (int i = 1; i <= 100; i++) {
            if (i % p == 0) {
                lampu[i] = !lampu[i];
            }
        }
    }

    int nyala = 0;
    for (int i = 1; i <= 100; i++) {
        if (lampu[i] == true) {
            nyala++;
        }
    }
    cout << nyala << endl;
}
