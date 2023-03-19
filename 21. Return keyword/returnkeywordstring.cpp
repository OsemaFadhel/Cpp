#include <iostream>

using namespace std;

// return = return a value back to the spot
//          where u called the encompassing function

string concat_strings(string string1, string string2){
    return string1 + " " + string2;
}

int main(){

    string first_name = "Bro";
    string last_name = "Code";
    string full_name = concat_strings(first_name, last_name);
    cout << "hello " << full_name << endl;

    return 0;
}
