#include <iostream>

using namespace std;


int main(){

    string car[] = {"Corvette", "Mustang", "Camry", "Ford"};

    for(int i = 0; i < sizeof(car)/sizeof(string); i++){
        cout << car[i] << endl;
    }
    
    return 0;
}