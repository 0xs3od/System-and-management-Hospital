#include "Nurse.h"

Nurse::Nurse(string id, string name, string address, string contactnumber, string department, double salary) :HospitalMember(id, name, address, contactnumber), department(department), salary(salary) {}

void Nurse::setDepartment() {
    string department;
    cout << "Enter Department :\n";
    cin >> department;
    this->department = department;
}

string Nurse::getDepartment() { return department; }

void Nurse::setSalary() {
    double salary;
    cout << "Enter Salary :\n";
    cin >> salary;;
    this->salary = salary;
}

double Nurse::getSalary() { return salary; }


void Nurse::operator--() { salary *= 1.1; }

void Nurse::operator++() { salary *= 1.1; }

void Nurse::printToFile(ofstream& file) const
{
    HospitalMember::printToFile(file); 
    file << ", Department: " << department << ", Salary: " << salary << endl;
}


bool operator==(const Nurse& nurse, const HospitalMember& member)
{
    return nurse.id == member.getId();
}

ostream& operator<<(ostream& output, Nurse& x1)
{
    output << x1.getName() << endl;
    output << x1.getId() << endl;
    output << x1.getAddress() << endl;
    output << x1.getContactNumber() << endl;
    output << x1.department << endl;
    output << x1.salary << endl;
    return output;
}

istream& operator>>(istream& input, Nurse& x1)
{
    cout << "Enter Name Nurse: ";
    input >> x1.name;
    cout << "Enter ID: ";
    input >> x1.id;
    cout << "Enter Address: ";
    input >> x1.address;
    cout << "Enter Contact number: ";
    input >> x1.contactnumber;
    cout << "Enter Department: ";
    input >> x1.department;
    cout << "Enter Salary: ";
    input >> x1.salary;
    return input;
}


void Nurse::displayInfo() const
{
    HospitalMember::displayInfo();
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
    cout << endl;

}


