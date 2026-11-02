#include "Date.h"

Date::Date(string id, string name, string address, string contactnumber, int day, int month, int year) : HospitalMember(id, name, address, contactnumber), day(day), month(month), year(year) {}

void Date::setDay(int day)
{
    cout << "Enter Day :\n";
    cin >> day;
    this->day = day;
}

void Date::setMonth(int month)
{
    cout << "Enter Month :\n";
    cin >> month;
    this->month = month;
}

void Date::setYear(int year)
{
    cout << "Enter Year :\n";
    cin >> year;
    this->year = year;
}

int Date::getDay() const
{
    return day;
}

int Date::getMonth() const
{
    return month;
}

int Date::getYear() const
{
    return year;
}

void Date::printToFile(ofstream& file) const
{
    HospitalMember::printToFile(file); 
    file << ", Day: " << day << ", Month: " << month << ", Year: " << year << endl;
}

void Date::displayInfo() const
{
    HospitalMember::displayInfo();
    cout << "Day: " << day << "\nMonth: " << month << "\nYear: " << year << endl;
    cout << endl;
}

istream& operator>>(istream& input, Date& x1)
{
    cout << "Enter Day: ";
    input >> x1.day;
    cout << "Enter Month: ";
    input >> x1.month;
    cout << "Enter Year: ";
    input >> x1.year;
    return input;
}

ostream& operator<<(ostream& output, Date& x1)
{
    output << x1.getDay() << endl;
    output << x1.getMonth() << endl;
    output << x1.getYear() << endl;
    return output;
}

bool operator==(const Date& date, const HospitalMember& member)
{
    return date.id == member.getId();
}
