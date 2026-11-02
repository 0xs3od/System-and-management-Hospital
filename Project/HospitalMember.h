#pragma once


#ifndef HOSPITALMEMBER_H
#define HOSPITALMEMBER_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;



class HospitalMember {
protected:
    string id;
    string name;
    string address;
    string contactnumber;
    

public:

    HospitalMember(string id = " ", string name = " ", string address = " ", string contactnumber = " ");

    void setId();
    string getId() const;

    void setName();
    string getName() const;

    void setAddress();
    string getAddress()const;

    void setContactNumber();
    string getContactNumber()const;

    virtual void displayInfo() const;


    friend bool operator==(const HospitalMember& member1, const HospitalMember &member2);


    friend ostream& operator<<(ostream& out, const HospitalMember& hm);
    friend istream& operator>>(istream& in, HospitalMember& hm);

    virtual void printToFile(ofstream& file) const;

};

#endif