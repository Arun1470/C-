#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int num, odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Odd: " << odd << endl;
    cout << "Even: " << even << endl;

    return 0;
}