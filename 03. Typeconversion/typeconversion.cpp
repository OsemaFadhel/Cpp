#include <iostream>

using namespace std;


//type conversion = conversion a value of one data type to another 
//                  Implicit = automatic
//                  Explicit = precede value with new data type (int)


int main() {

    double x = (int)3.14;
    char y = 100;

    cout << x << endl;
    cout << y << endl;
    cout << (char)100 << endl;


    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
                        // this ^   
    cout << score << "%";

     return 0;
}