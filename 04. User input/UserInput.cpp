#include <iostream>

using namespace std;


//cout << (insertion op)
//cin >> (extraction op)


int main (){

    string name;
    int age;

    cout << "What's your name?: ";   //to write a full name with spaces use this: getline(cin, name);
    cin >> name;

    cout << "What's your age?: ";
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "You are " << age <<  "yrs old.";


    return 0;
}