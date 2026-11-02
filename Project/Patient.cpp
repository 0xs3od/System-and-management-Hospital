#include "Patient.h"


Patient::Patient(string id, string name , string address , string contactnumber, string illnessDescription, string medicalRecordNumber, string doctorIncharge) :HospitalMember(id, name,address,contactnumber), illnessDescription(illnessDescription), doctorInCharge(doctorInCharge),medicalRecordNumber(medicalRecordNumber) {}

void Patient::setIllnessDescription() {

    string illnessDescription;
    cout << "Enter Illness Description: \n";
    cin >> illnessDescription;

    this->illnessDescription = illnessDescription;
}
string Patient::getIllnessDescription() const { return illnessDescription; }

void Patient::setMedicalRecordNumber() {
    string medicalRecordNumber;
    cout << "Enter Medical Record Number: \n";
    cin >> medicalRecordNumber;
    this->medicalRecordNumber = medicalRecordNumber;
}

string Patient::getMedicalRecordNumber() {
    return medicalRecordNumber;
}

void Patient::setDoctorInCharge() {

    string doctorInCharge;
    cout << "Enter Doctor In Charge: \n";
    cin >> doctorInCharge;
    this->doctorInCharge = doctorInCharge;
}
string Patient::getdoctorInCharge() { return doctorInCharge; }



void Patient::printToFile(ofstream& file) const
{
    HospitalMember::printToFile(file); 
    file << ", Medical Record Number: " << medicalRecordNumber << ",  Illness Description: " << illnessDescription << ", Doctor In Charge: " << doctorInCharge << endl;
}

void Patient::displayInfo() const {
    HospitalMember::displayInfo();
    cout << "Illness Description: " << illnessDescription << endl;
    cout << "Medical Record Number: " << medicalRecordNumber << endl;
    cout << "Doctor In Charge " << doctorInCharge << endl;

}

ostream& operator<<(ostream& output, Patient& x1)
{
    output << x1.getName() << endl;
    output << x1.getId() << endl;
    output << x1.getAddress() << endl;
    output << x1.getContactNumber() << endl;
    output << x1.medicalRecordNumber << endl;
    output << x1.illnessDescription << endl;
    output << x1.doctorInCharge << endl;
    return output;
}

istream& operator>>(istream& input, Patient& x1)
{
    cout << "Enter Name Patient: ";
    input >> x1.name;
    cout << "Enter ID: ";
    input >> x1.id;
    cout << "Enter Address: ";
    input >> x1.address;
    cout << "Enter Contact number: ";
    input >> x1.contactnumber;
    cout << "Enter medical Number: ";
    input >> x1.medicalRecordNumber;
    cout << "Enter Illness Description:";
    input >> x1.illnessDescription;
    cout << "Enter Doctor In Charge:";
    input >> x1.doctorInCharge;
    return input;
}
