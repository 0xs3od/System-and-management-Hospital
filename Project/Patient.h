#pragma once
#include "HospitalMember.h"
class Patient :
    public HospitalMember
{

    string illnessDescription;
    string medicalRecordNumber;
    string doctorInCharge;

public:
    Patient(string id = " ", string name = " ", string address =" ", string contactnumber = " ", string illnessDescription = " ", string medicalRecordNumber = " ", string doctorIncharge = " ");

    void setIllnessDescription();
    string getIllnessDescription() const;

    void setMedicalRecordNumber();
    string getMedicalRecordNumber();

    void setDoctorInCharge();
    string getdoctorInCharge();

    friend ostream& operator<<(ostream& output, Patient& x1);
    friend istream& operator>>(istream& input, Patient& x1);
    friend bool operator==(const Patient& doctor, const HospitalMember& member);

    void printToFile(ofstream& file) const override;


    void displayInfo() const override;


};

