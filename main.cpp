#include <iostream>
#include "person.h"
using namespace std;

void printHello(){
    cout << "Hello C++ on Mac!" << endl;
}



int main() {
    printHello();

    string userName;
    int year, month, day;

    cout << "Enter your name: \n";
    getline(cin, userName);

    cout << "Enter birth year: \n";
    cin >> year;

    cout << "Enter birth month: \n";
    cin >> month;

    cout << "Enter birth day: \n";
    cin >> day;

    sayHello(userName);

    double age = calculateAge(year, month, day);

    cout << "Your age is: " << age << " years" << endl;

    return 0;
}




