#include <iostream>

using namespace std;

int main() {
    /*


   int age = 101;
   bool isEligible = age >= 18 || age <= 100;
   cout << boolalpha << isEligible <<  endl;
   cout << !isEligible << endl;

     */
    /* Order of Logical Operators
    ()
    !
    &&
    ||
    */

    /*
    int grade = 7;
    bool hasTakenMbot = false;

    bool isEligibleForVex = (grade >= 9 || grade <= 12) && hasTakenMbot;
    cout << boolalpha << isEligibleForVex << endl;

    bool registrationRefused = !isEligibleForVex;
    cout <<boolalpha << registrationRefused << endl;

*/
/*
    bool hasHighIncome = false;
    bool hasGoodScoreForCredit = false;

    bool isEligibleForLoan = hasHighIncome && hasGoodScoreForCredit;
    cout << boolalpha << isEligibleForLoan << endl;
*/

    bool isEthiopianCitizen = true;
    bool hasBachelorDegree = true;
    int workExperience = 2;
    bool isEligibleForWork = isEthiopianCitizen && (hasBachelorDegree || workExperience >= 2);
    cout << boolalpha << isEligibleForWork << endl;
    return 0;
}
