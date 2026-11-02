
#include "HospitalMember.h"
class Doctor :
    public HospitalMember
{
    double salary;
    string specialization;

public:

    Doctor(string id = " ", string name = " ", string address = " " , string contactnumber = " ", string specialization = " ", double salary = 0.0);

    void setSalary();
    double getSalary() const;

    void setSpecialization();
    string getSpecialization();



    void operator++();
    void operator--();
    friend bool operator==(const Doctor& Doctor, const HospitalMember& member);
    friend ostream& operator<<(ostream& output, Doctor& x1);
    friend istream& operator>>(istream& input, Doctor& x1);

    void printToFile(ofstream& file) const override;

    void displayInfo() const override;

};
