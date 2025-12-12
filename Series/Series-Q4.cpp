#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int term = i * i - 1;
        cout << term << " ";  
    }
    cout << endl; 
    return 0;
}