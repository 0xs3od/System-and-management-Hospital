#include "HospitalMember.h"
#include <iostream>
#include <fstream>
using namespace std;




HospitalMember::HospitalMember(string id, string name, string address, string contactnumber) : id(id), name(name), address(address), contactnumber(contactnumber) {}
 

void HospitalMember::setId() { 

    string id;
    cout << "Enter Id :\n";
    cin >> id;

    this->id = id;
}
string HospitalMember::getId() const { return id; }

void HospitalMember::setName() { 
    
    string name;
    cout << "Enter Name :\n";
    cin >> name;
    this->name = name; }
string HospitalMember::getName() const { return name; }

void HospitalMember::setAddress() {

    string address;
    cout << "Enter Address :\n";
    cin >> address;
    this->address = address; 
}
string HospitalMember::getAddress() const { return address; }

void HospitalMember::setContactNumber()
{
    cout << "Enter Contact Number :\n";
    cin >> contactnumber;
    this->contactnumber = contactnumber;
}

string HospitalMember::getContactNumber() const { return contactnumber; }




void HospitalMember::displayInfo() const {
    cout << "Name: " << name << "\nID: " << id << "\nAddress: " << address << "\nContact number: " << contactnumber << endl;
    cout << endl;

}

void HospitalMember::printToFile(ofstream& file) const
{
    file << "ID: " << id << ", Name: " << name << ", Address: " << address << ", Contact Number: " << contactnumber << endl; 
}




bool operator==(const HospitalMember& member1, const HospitalMember& member2)
{
    return member1.id == member2.id;
}

ostream& operator<<(ostream& output, const HospitalMember& x1) {
    output << x1.id << endl;
    output << x1.name << endl;
    output << x1.address << endl;
    output << x1.contactnumber << endl;
    return output;
} 

istream& operator>>(istream& input, HospitalMember& x1) {
    cout << "Enter ID: ";
    input >> x1.id;
    cout << "Enter Name: ";
    input >> x1.name;
    cout << "Enter Address: ";
    input >> x1.address;
    cout << "Enter Contact number: ";
    input >> x1.contactnumber;

    return input;
}








