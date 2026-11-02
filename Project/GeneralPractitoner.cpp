#include "GeneralPractitoner.h"


GeneralPractitoner::GeneralPractitoner(string id, string name, string address , string contactnumber, int clinicHours, int patientLoad) :HospitalMember(id, name, address,contactnumber), clinicHours(clinicHours), patientLoad(patientLoad) {}

void GeneralPractitoner::setClinicHours() {
    int clinicHours;
    cout << "Enter Clinic Hours: ";
    cin >> clinicHours;
    this->clinicHours = clinicHours; }

int GeneralPractitoner::getCLinicHours() const { return clinicHours; }

void GeneralPractitoner::setPatientLoad() { 
    int patientLoad;
    cout << "Enter patient Load: ";
    cin >> patientLoad;
    this->patientLoad = patientLoad; }

int GeneralPractitoner::getPatienntLoad()const { return patientLoad; }



bool operator==(const GeneralPractitoner& generalPractitoner, const HospitalMember& member)
{
    return generalPractitoner.id == member.getId();
}

ostream& operator<<(ostream& output, GeneralPractitoner& x1)
{
    output << x1.getName() << endl;
    output << x1.getId() << endl;
    output << x1.getAddress() << endl;
    output << x1.getContactNumber() << endl;
    output << x1.clinicHours << endl;
    output << x1.patientLoad << endl;
    return output;
}

void GeneralPractitoner::printToFile(ofstream& file) const
{
    HospitalMember::printToFile(file);
    file << ", Clinic Hours: " << clinicHours << ",  Patient Load: " << patientLoad;

}

void GeneralPractitoner::displayInfo() const
{
    HospitalMember::displayInfo();
    cout << "Clinic Hours: " << clinicHours << endl;
    cout << "PatientLoad: " << patientLoad << endl;
    cout << endl;

}



istream& operator>>(istream& input, GeneralPractitoner& x1)
{
    cout << "Enter Name Doctor: ";
    input >> x1.name;
    cout << "Enter ID: ";
    input >> x1.id;
    cout << "Enter Address: ";
    input >> x1.address;
    cout << "Enter contact number: ";
    input >> x1.contactnumber;
    cout << "Enter Clinic Hours: ";
    input >> x1.clinicHours;
    cout << "Enter PatientLoad: ";
    input >> x1.patientLoad;
    return input;
}
