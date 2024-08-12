
#include <iostream>

using namespace std;

int main() {
    double originalPrice = 200.10;
    cout << "Original Price = $" << originalPrice << endl;

    const double taxRate = 0.06;
    double tax = originalPrice * taxRate;
    cout << "Tax = $" << tax << endl;

    const double discountRate = 0.02;
    double discount = originalPrice * discountRate;
    cout << "Discount = $" << discount << endl;

    double netPrice = originalPrice + tax - discount;
    cout << "Net Price = $" << netPrice;

return 0;
}


