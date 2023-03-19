#include <iostream>

using namespace std;

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) +1; 

    cout << "\033[1;31m********NUMBER-GUESSING-GAME********\033[0m" << endl;

    do{
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;
        
        if (guess > num){
            cout << "Too high! " << endl;
        } 
        else if(guess < num){
            cout << "Too low!" << endl;
        }
        else{
            cout << "CORRECT! # of tries: " << tries << endl;
        }
        
    }while(guess != num);


    cout << "\033[1;31m************************************\033[0m" << endl;

    return 0;
}