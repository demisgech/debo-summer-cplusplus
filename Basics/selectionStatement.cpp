
#include <iostream>

using namespace std;

int main() {
   /*double temperature;
   cout << "Enter a temperature: ";
   cin >> temperature;
   if(temperature >= 50)
    cout << "Hot!" << endl;
   else if(temperature >= 20 && temperature < 50)
        cout << "Nice!" << endl;
   else cout << "Cold!" << endl;
    */

   double sales;
   cout << "Enter sales: ";
   cin >> sales;
   double commission;
   if(sales >= 10000)
    commission = sales*0.2;
   else if(sales < 10000 && sales>= 5000)
    commission = sales * .15;
   else if (sales < 5000 && sales >= 1000)
    commission = sales*.1;
   else
    commission = sales*0;
    cout << "Commission = $" << commission << endl;
    return 0;
}
