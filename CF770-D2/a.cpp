#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string alphabet = "";
    for (int i = 0; i < k; i++) {
        alphabet += char('a' + i);
    }

    string password = "";
    for (int i = 0; i < n; i++) {
        password += alphabet[i % k];
    }

    cout << password << endl;

    return 0;
}
