#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price1, price2, discount;
    cin >> price1 >> price2 >> discount;
    double total = price1 + price2;
    double saved = (discount / 100.0) * total;
    double discounted_price = total - saved;
    cout << fixed << setprecision(2);
    cout << total << endl << discounted_price << endl << saved << endl;
    return 0;
}