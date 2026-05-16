#include <iostream>
using namespace std;

void printHello(){
    std::cout << "Hello C++ on Mac!" << std::endl;
}

void sayHello(string name){
    std::cout << "Hello " << name << " !" << std::endl;
}

int main() {
    printHello();

    string userName;

    std::cout << "Enter your name: \n";
    cin.ignore();
    getline(cin, userName); 
    

    sayHello(userName);

    return 0;
}




