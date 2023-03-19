#include <iostream>
using namespace std;

// foreach loop = loop that eases the traversal over an 
//                iterable data set

int main(){

    string cars[] = {"Corvette", "Mustang", "Camry", "Ford"};

    for(string car : cars){
        cout << car << endl;
    }

    return 0;
}