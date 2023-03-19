#include <iostream>

using namespace std;

// sizeof() = determines the size in bytes of a:
//            variable, data type, class, objects, ...

int main(){
    
    double gpa = 2.5;

    cout << sizeof(gpa) << "bytes" << endl;
    cout << sizeof(double) << "bytes" << endl;
    cout << sizeof(string) << "bytes" << endl; 
    
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    cout << sizeof(grades)/sizeof(char) << "bytes" << endl; 
    
    return 0;
}