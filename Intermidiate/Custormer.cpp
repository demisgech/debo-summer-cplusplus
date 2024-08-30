#include <iostream>

using namespace std;

struct Address {
    string country;
    string city;
    int zipCode;

};
struct Customer {
    int id;
    string name;
    string email;
    Address address;
};

void createCustomerObject() {
    Customer customerOne;
    cout << "Id: ";
    cin >> customerOne.id;

    cout << "Name: ";
    cin >> customerOne.name;

    cout << "Email: ";
    cin >> customerOne.email;

    cout << "Country: ";
    cin >> customerOne.address.country;

    cout << "City: ";
    cin >> customerOne.address.city;

    cout << "Zip Code: ";
    cin >> customerOne.address.zipCode;

    cout << "Id: " << customerOne.id << endl
         << "Name: " << customerOne.name << endl
         << "Email: " << customerOne.email << endl
         << "Country: " << customerOne.address.country << endl
         << "City: " << customerOne.address.city << endl
         << "Zip Code: " << customerOne.address.zipCode << endl;
}
int main() {

  createCustomerObject();

    return 0;
}


