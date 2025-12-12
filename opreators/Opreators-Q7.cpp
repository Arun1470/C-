#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int sum = (number / 10) + (number % 10);
    cout << sum << endl;
    return 0;
}