#include "Surgeon.h"


Surgeon::Surgeon(string id, string name, string address, string contactnumber, string surgeryType, int yearsOfExperience) : HospitalMember(id, name,address,contactnumber), surgeryType(surgeryType), yearsOfExperience(yearsOfExperience) {}


void Surgeon::setSurgeryType() { 
    
    string surgeryType;
    cout << "Enter surgeryType :\n";
    cin >> surgeryType;
    this->surgeryType = surgeryType; }

string Surgeon::getSurgeryType() { return surgeryType; }



void Surgeon::setyearsOfExperience() { 
    
    int yearsOfExperience;
    cout << "Enter Years Of experience :\n";
    cin >> yearsOfExperience;
    this->yearsOfExperience = yearsOfExperience; }

int Surgeon::getYearsOfExperience() { return yearsOfExperience; }

bool operator==(const Surgeon& surgeon, const HospitalMember& member)
{
    return surgeon.id == member.getId();
}

ostream& operator<<(ostream& output, Surgeon& x1)
{
    output << x1.getName() << endl;
    output << x1.getId() << endl;
    output << x1.getAddress() << endl;
    output << x1.getContactNumber() << endl;
    output << x1.surgeryType << endl;
    output << x1.yearsOfExperience << endl;
    return output;

}

istream& operator>>(istream& input, Surgeon& x1)
{
    cout << "Enter Name Doctor: ";
    input >> x1.name;
    cout << "Enter ID: ";
    input >> x1.id;
    cout << "Enter Address: ";
    input >> x1.address;
    cout << "Enter contact number: ";
    input >> x1.contactnumber;
    cout << "Enter Surgery Type: ";
    input >> x1.surgeryType;
    cout << "Enter Years Of Experience: ";
    input >> x1.yearsOfExperience;
    return input;
}

void Surgeon::printToFile(ofstream& file) const
{
    HospitalMember::printToFile(file);
    file << ", Surgery Tupe: " << surgeryType << ",  Years of expericence: " << yearsOfExperience;

}

void Surgeon::displayInfo() const
{
    HospitalMember::displayInfo();
    cout << "Surgery Type : " << surgeryType << endl;
    cout << "Years Of Experience: " << yearsOfExperience << endl;
    cout << endl;

}


