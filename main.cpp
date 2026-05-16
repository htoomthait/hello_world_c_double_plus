#include <iostream>
using namespace std;

void printHello(){
    cout << "Hello C++ on Mac!" << endl;
}

void sayHello(string name){
    cout << "Hello " << name << " !" << endl;
}

int main() {
    printHello();

    string userName;

    cout << "Enter your name: \n";
    cin.ignore();
    getline(cin, userName); 
    

    sayHello(userName);

    return 0;
}




