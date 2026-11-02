#pragma once
#include "HospitalMember.h"

class Surgeon :
    public HospitalMember
{
    string surgeryType;
    int yearsOfExperience;

public:

    Surgeon(string id = " ", string name = " ", string address = " ", string contactnumber = " ", string surgeryType = " ", int yearsOfExperience = 0);

    void setSurgeryType();
    string getSurgeryType();


    void setyearsOfExperience();
    int getYearsOfExperience();



    friend bool operator==(const Surgeon& surgeon, const HospitalMember& member);

    friend ostream& operator<<(ostream& output, Surgeon& x1);
    friend istream& operator>>(istream& input, Surgeon& x1);

    void printToFile(ofstream& file) const override;

    void displayInfo() const override;

};



