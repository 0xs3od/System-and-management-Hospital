#pragma once
#include "HospitalMember.h"
class Nurse :
    public HospitalMember
{

    string department;
    double salary;

public:

    Nurse(string id = " ", string name = " ", string address = " ", string contactnumber = " ", string department = " ", double salary = 0.0);


    void setDepartment();
    string getDepartment();

    void setSalary();
    double getSalary();


    void operator--();
    void operator++();
    friend bool operator==(const Nurse& nurse, const HospitalMember& member);
    void printToFile(ofstream& file) const override;


    friend ostream& operator<<(ostream& output, Nurse& x1);
    friend istream& operator>>(istream& input, Nurse& x1);


    void displayInfo() const override;
};

