#include "Student.h"
#include "Person.h"
#include <iostream>

Student::Student(const string& name, int age, int id) :Person{ name, age }, id(id) {}

void Student::studying() const {
  cout << name << " is studying" << endl;
}