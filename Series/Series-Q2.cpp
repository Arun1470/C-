#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 1, b = 2;

    for (int i = 0; i < n; i++) {
        if (i == 0)
            cout << a;
        else if (i == 1)
            cout << " " << b;
        else {
            int c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }

    return 0;
}