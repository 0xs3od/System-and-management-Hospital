#pragma once
#include "HospitalMember.h"
class GeneralPractitoner :
    public HospitalMember
{
    int clinicHours;
    int patientLoad;

public:

    GeneralPractitoner(string id = " ", string name = " ", string address = " ", string contactnumber = " ", int clinicHours = 0, int patientLoad = 0);

    void setClinicHours();
    int getCLinicHours()const;

    void setPatientLoad();
    int getPatienntLoad()const;


    friend bool operator==(const GeneralPractitoner& generalPractitoner, const HospitalMember& member);

    friend ostream& operator<<(ostream& output, GeneralPractitoner& x1);
    friend istream& operator>>(istream& input, GeneralPractitoner& x1);

    void printToFile(ofstream& file) const override;


    void displayInfo() const override;
};

