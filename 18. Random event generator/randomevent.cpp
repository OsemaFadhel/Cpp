#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));
    int rand_num = rand() % 5 + 1;

    switch(rand_num){
        case 1: cout << "You win a jacket" << endl;
        break;
        case 2: cout << "You win a shirt" << endl;
        break;
        case 3: cout << "You win a gift" << endl;
        break;
        case 4: cout << "You win a card" << endl;
        break;
        case 5: cout << "You win a candy" << endl;
        break;
    }

    return 0;
}