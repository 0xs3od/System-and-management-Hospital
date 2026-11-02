
#include "Doctor.h"

// 
Doctor::Doctor(string id, string name,string address,string contactnumber, string specialization, double salary) :HospitalMember(id, name,address,contactnumber), specialization(specialization), salary(salary) {}

void Doctor::setSalary() {

    double salary;
    cout << "Enter Salary :\n";
    cin >> salary;
    this->salary = salary;
}

double Doctor::getSalary() const { return salary; }

void Doctor::setSpecialization() {

    string specialization;
    cout << "Enter specialization :\n";
    cin >> specialization;
    this->specialization = specialization;
}

string Doctor::getSpecialization() { return specialization; }


void Doctor::operator++() { salary *= 1.1; }

void Doctor::operator--() { salary *= 1.1; }



istream& operator>>(istream& input, Doctor& x1)
{
    cout << "Enter Name Doctor: ";
    input >> x1.name;
    cout << "Enter ID: ";
    input >> x1.id;
    cout << "Enter Address: ";
    input >> x1.address;
    cout << "Enter contact number: ";
    input >> x1.contactnumber;
    cout << "Enter Specialization: ";
    input >> x1.specialization;
    cout << "Enter Salary :";
    input >> x1.salary;
    return input;

}
bool operator==(const Doctor& doctor, const HospitalMember& member)
{
    return doctor.id == member.getId();
}

ostream& operator<<(ostream& output, Doctor& x1)
{
    output << x1.getId() << endl;
    output << x1.getName() << endl;
    output << x1.getAddress() << endl;
    output << x1.getContactNumber() << endl;
    output << x1.getSpecialization() << endl;
    output << x1.getSalary() << endl;

    return output;
}



void Doctor::printToFile(ofstream& file) const
{
    HospitalMember::printToFile(file); 
    file << ", Specialization: " << specialization << ", Salary : " << salary << endl;
}

void Doctor::displayInfo() const {
    HospitalMember::displayInfo();
    cout << "Salary: " << salary << "\nSpecialzation: " << specialization << endl;
    cout << endl;
}


