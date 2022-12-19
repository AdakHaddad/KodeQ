// Using classes, design an online address book to keep track of the names, addresses, phone numbers, and dates of birth of family members, close friends, and certain business associates
// program can load the data into address book from a disk
// program can save the data from address book to a disk
// sort address book by last name
// search for a person by last name
// print address, phone number, date of birth(if exist) of a given person
// print the names of the people whose birthdays are in a given month
// print the names of all the people between two last name

#include <iostream>
using namespace std;
class dateType: {
public:
    void setDate(int month, int day, int year);
    void getDate(int& month, int& day, int& year) const;
    void printDate() const;
    bool isLeapYear() const;
    int daysPerMonth(int month) const;
    int daysThisYear() const;
    int daysToDate() const;
    int dateDifference(dateType date) const;
    dateType(int month = 1, int day = 1, int year = 1900);

};
class personType: {
public:
    void setName(string first, string last);
    void getName(string& first, string& last) const;
    void printName() const;
    personType(string first = "", string last = "");

};
class addressType: {
public:
    void setAddress(string street, string city, string state, string zip);
    void getAddress(string& street, string& city, string& state, string& zip) const;
    void printAddress() const;
    addressType(string street = "", string city = "", string state = "", string zip = "");

};
class extPersonType: {
public:
    void setPhone(string phone);
    void getPhone(string& phone) const;
    void printPhone() const;
    void setBirthDate(int month, int day, int year);
    void getBirthDate(int& month, int& day, int& year) const;
    void printBirthDate() const;
    extPersonType(string first = "", string last = "", string street = "", string city = "", string state = "", string zip = "", string phone = "", int month = 1, int day = 1, int year = 1900);

};
class addressBookType: {
public:
    void sort();
    void search(string last) const;
    void print(string last) const;
    void printBirthdays(int month) const;
    void printRange(string first, string last) const;
    void load();
    void save();
    addressBookType();

};
int main() {
    
    return 0;
}
