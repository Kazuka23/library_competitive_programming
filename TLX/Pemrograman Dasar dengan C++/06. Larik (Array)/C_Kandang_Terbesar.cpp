#include <iostream>
using namespace std;

int main() {
    int luas[5] = {225 * 335, 215 * 394, 198 * 400, 314 * 298, 299 * 278};

    int luas_terbesar = luas[0];

    for (int c = 1; c < 5; c++) {
        if (luas[c] > luas_terbesar) {
            luas_terbesar = luas[c];
        }
    }

    cout << luas_terbesar << endl;
}
