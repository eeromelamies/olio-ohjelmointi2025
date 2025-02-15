#include "student.h"
using namespace std;
#include <string>
#include <iostream>


Student::Student(string s, int i):Name(s),Age(i)
{

}

void Student::setAge(int A)
{
    Age = A;
}

void Student::setName(string N)
{
    Name = N;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout<<"opiskelian nimi: "<<Name<<endl;
    cout<<"opiskelijan ika: "<<Age<<endl;

}
