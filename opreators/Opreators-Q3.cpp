#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float principal, rate, time;
    cin >> principal >> rate >> time;
    float interest = (principal * rate * time) / 100;
    float amount = principal + interest;
    float discount = (2.0 / 100) * interest;
    float finalAmount = amount - discount;
    cout << fixed << setprecision(2);
    cout << interest << endl;
    cout << amount << endl;
    cout << discount << endl;
    cout << finalAmount << endl;

    return 0;
}