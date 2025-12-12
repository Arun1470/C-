#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int term = 6;
    int diff = 3;

    for (int i = 0; i < n; i++) {
        cout << term;
        if (i != n - 1)
            cout << " ";
        term += diff;
        diff += 2;
    }

    return 0;
}