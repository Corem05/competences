#include <iostream>

using namespace std;

int main() {
    int n, k;
    while (cin >> n >> k)
        cout << (k > n ? (k - n) : (n - k)) << endl;
    return 0;
}