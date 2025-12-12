#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 7;

    for (int i = 0; i < n; i++) {
        cout << current;
        if (i != n - 1) cout << " ";

        if (i % 2 == 0) {
            current -= 2;
        } else {
            current += 3;
        }
    }

    return 0;
}