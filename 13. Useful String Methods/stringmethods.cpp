#include <iostream>

using namespace std;

int main() {

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if(name.length() > 12){
        cout << "Your name can't be over 12 characters!" << endl;
    }
    else if(name.empty()){
        cout << "You didn't enter your name";
    }
    else{
        name.append("@gmail.com");                    // cout << name.at(0);  <--- it will show only the letter in that position  
        cout << "Welcome " << name;                   // example : fazzel   is gonna be 'f' 
    }
    // name.insert(0, "@");   this will insert the character *we decided in the postion we choose 
    // cout << name.find(' ');       this will find the character we choose and will say in which position will be the first
    // name.erase(0, 3);       this will delete the characters we choose. ex. (0, 3) means will delete first 3 - starts 0 
     //check cplusplus site for more
    return 0;
}