#include "Person.h"



Person::~Person()
{

}

Person::Person(int age):age{age} {
}

Person::Person(const string& firstName,const string& lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
}
int Person::getAge() {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}


string Person::getFirstName() {
    return firstName;
}

void Person::setFirstName(const string& firstName) {
    this->firstName = firstName;
}

string Person::getLastName() {
    return lastName;
}
void Person::setLastName(const string& lastName){
    this->lastName = lastName;
}
