#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {

  private:
    int id;

  public:
    explicit Student(const string& name, int age, int id);
    void studying() const;
};



#endif