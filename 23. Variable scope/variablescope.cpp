#include <iostream>

using namespace std;

// Local variables = declared inside a function or block {}
// Global variables = declared outside of all funnctions 

int my_num = 3;
// ^ Global variable 
void print_num(){
    int my_num = 2;
    cout << my_num << endl;
}

int main(){

    int my_num = 1;
    // ^ Local variable
    print_num();
    cout << ::my_num << endl;
    //   :: ^ this will get the global variable 

    return 0;
}