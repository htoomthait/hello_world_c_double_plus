#include <iostream>
#include "person.h"

using namespace std;

void sayHello(string name) {
    cout << "\n\n";
    cout << "Hello " << name << "!" << endl;
}

void getCurrentDate(int &year, int &month, int &day) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    year = 1900 + ltm->tm_year;
    month = 1 + ltm->tm_mon;
    day = ltm->tm_mday;
}

// simple age calculation with decimal approximation
double calculateAge(int birthYear, int birthMonth, int birthDay) {
    int currentYear, currentMonth, currentDay;
    getCurrentDate(currentYear, currentMonth, currentDay);  

    int years = currentYear - birthYear;
    int months = currentMonth - birthMonth;
    int days = currentDay - birthDay;

    

    double age = years + (months / 12.0) + (days / 365.0);

    

    return age;
}

