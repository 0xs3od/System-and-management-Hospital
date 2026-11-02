

#include <iostream>
#include <fstream>
#include "HospitalMember.h"
#include "Patient.h"
#include "doctor.h"
#include "Nurse.h"
#include "Date.h"

using namespace std;

void writeToFile(HospitalMember* member, const string& filename) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << *member;
        file << endl;
        file.close();
    }
    else {
        cout << "Unable to open file for writing.\n";
    }
}

void readFromFile(const string& filename) {
    ifstream file(filename);
    string line;
  
    if (file.is_open()) {
        while (getline(file, line)) {

          cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file for reading.\n";
    }
}



int main() {


    Patient pt1;
    cout << "Enter patient details \n" << endl;
    cin >> pt1;
    cout << endl;

    Doctor dt1;
    cout << "\nEnter doctor details \n" << endl;
    cin >> dt1;
    cout << endl;

    Nurse ns1;
    cout << "\nEnter nurse details \n" << endl;
    cin >> ns1;
    cout << endl;





    if (dt1 == ns1) {
        cout << " Same ID\n" << endl;
    }
    else {
        cout << " Different ID\n " << endl;
    }
   
    

 

    ofstream file("HospitalMembers.dat");
    if (file.is_open()) {
        pt1.printToFile(file);
        file << endl; 
        dt1.printToFile(file);
        file << endl; 
        ns1.printToFile(file);
        file << endl; 
        file.close(); 
    }
    else {
        cout << "Unable to open file for writing." << endl;
    }
  

    writeToFile(&pt1, "HospitalMembers.dat");
    writeToFile(&dt1, "HospitalMembers.dat");
    writeToFile(&ns1, "HospitalMembers.dat"); 



    cout << "\nData from file:\n";
    readFromFile("HospitalMembers.dat");
    return 0;
}