#pragma once
#include "HospitalMember.h"
class Date :
    public HospitalMember
{
private:
    int day;
    int month;
    int year;

public:
    Date(string id = " ", string name = " ", string address = " ", string contactnumber = " ", int day = 1, int month = 1, int year = 2000);

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    friend istream& operator>>(istream& input, Date& x1);

    friend ostream& operator<<(ostream& output, Date& x1);

    friend bool operator==(const Date& date, const HospitalMember& member);

    void printToFile(ofstream& file) const override;
    void displayInfo() const override;

};

