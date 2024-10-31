#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(const string& name, int age) : name(name), age(age){}
void Person::introduction() const{
  cout << "Hi my name is " << name << " and I am " << age << endl;
}