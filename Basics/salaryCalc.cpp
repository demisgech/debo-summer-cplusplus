#include <iostream>

using namespace std;

int main() {

    double savedMoney;
    cout << "Saved money: ";
    cin >> savedMoney;

    string name;
    cout << "Name: ";
    cin >> name;

    double oldSalary;
    cout << "Old salary: ";
    cin >> oldSalary;

    double salaryRate;
    cout << "Salary rate: ";
    cin >> salaryRate;

    double newSalary = oldSalary + savedMoney*salaryRate;

    cout << "Name : " << name << endl
         << "Total salary: " << newSalary;




  return 0;
}


