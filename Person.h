#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person{

  protected:
    string name;
    int age;

  public:
    Person(const string& name, int age);
    void introduction() const;
};

#endif