#include <iostream>
using namespace std;

void cetak_menurun(int n) {
    if (n == 0) {
        return;
    }
    cout << n << endl;
    cetak_menurun(n - 1);
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cetak_menurun(10);
}
