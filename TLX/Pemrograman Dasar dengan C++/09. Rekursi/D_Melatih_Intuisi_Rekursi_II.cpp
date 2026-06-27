#include <iostream>
#include <string>
using namespace std;

int hitung_vokal(string s) {
    if (s.empty()) {
        return 0;
    }

    char c = s[0];
    if (s[0] == 'a' || s[0] == 'i' || s[0] == 'u' || s[0] == 'e' || s[0] == 'o') {
        return 1 + hitung_vokal(s.substr(1));
    } else {
        return hitung_vokal(s.substr(1));
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << hitung_vokal("lorem ipsum dolor sit amet fermentum egestas luctus praesent torquent justo.") << endl;
}
