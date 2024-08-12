#include <iostream>
#include <iomanip>
using namespace std;

int main() {
/*
    for(int i = 5; i >=1 ; i--) {
        for(int j = 1; j<=5; j++)
            if(i>j)
            cout << setw(5) << " ";
            else cout << setw(5) << "*";
        cout << endl;
    }

 for(int i = 1; i <=5 ; i++) {
        for(int j = 1; j<=5; j++)
            if(i==j || i + j == 6)
            cout << setw(5) << "*";
            else cout << setw(5) << " ";
        cout << endl;
    }

    double numbers[] = {12,34,56,78,100,200};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int sum = 0;

    for(int i = 0; i < size ; i++)
        sum += numbers[i];
    cout << "Sum = " << sum << endl;

    int lists[] = {5,5,2,2,4,4,2,2,2,2};
    int len = sizeof(lists)/sizeof(lists[0]);
    for(int i = 0; i < len; i++) {
        for(int j = 1; j <= lists[i]; j++)
            cout << setw(5) << "*";
        cout << endl;
    }
    label:
    cout << "Goto" << endl;
    for(int i =1; i<= 5; i++){
            if(i == 3)
            goto label;
        cout << i << endl;
    }

    int sum = 0;
    for(int i = 1; i <= 5; i++)
        sum+= i;
    cout << sum;

*/

    int i = 0;
    int sum = 0;
    label:
        sum += i;
        i++;
    if(i <= 5)
        goto label;
    cout << sum;

        return 0;
}
