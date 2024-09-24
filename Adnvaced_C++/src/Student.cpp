#include "Student.h"

Student::Student(const string& firstName,const string& lastName){
    this->firstName = firstName;
    this->lastName = lastName;
}

string Student::getFirstName() {
    return firstName;
}

void Student::setFirstName(const string& firstName) {
    this->firstName = firstName;
}

string Student::getLastName() {
    return lastName;
}

void Student::setLastName(const string& lastName) {
    this->lastName = lastName;
}

