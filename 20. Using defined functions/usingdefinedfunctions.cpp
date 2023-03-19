#include <iostream>

using namespace std;


//function = a block of reusable code

void happy_birthday(string name, int age){
    cout << "Happy Birthday to " << name << endl;
    cout << "Happy Birthday to you!" << endl;
    cout << "Happy Birthday dear you!" << endl;
    cout << "Happy Birthday to you! " << age << endl;
}

int main(){

    string name = "Fazzel";
    int age = 21;

    happy_birthday(name, age);

    return 0;
}