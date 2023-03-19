#include <iostream>
#include <vector>

using namespace std;

//typedef = reserved keyword used to create an additional name for another data type.
//          New identifier for an existing type, helps with readibility and reduces typos.
//          Use when there is a clear benefit.
//          Replaced with 'using' (work better with templates).


//typedef vector<pair<string, int>> pairlist_t; 
//typedef string text_t;        example
//typedef int number_t;         example
using text_t = string;        //example
using number_t = int;         //example


int main() {

    text_t firstname = "Fazzel";
    number_t age = 21;

    cout << firstname << endl; 


    return 0;
}