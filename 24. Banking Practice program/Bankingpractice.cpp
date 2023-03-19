#include <iostream>
#include <iomanip>

using namespace std;

void show_balance(double balance){
    cout << "You're balance is: $" << setprecision(2) << fixed << balance << endl; 
    
}
double deposit(){
    double amount = 0;

    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        cout << "That's not a valid amount!" << endl;
        return 0;
    }
}
double withdraw(double balance){
    
    double amount = 0;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if(amount > balance){
        cout << "Insufficient fund!";
        return 0;
    }
    else if(amount < 0){
        cout << "That's not a valid amount!" << endl;
        return 0;
    }
    else{
        return amount;
    }
    return 0;
}


int main(){

    double balance = 1000;
    int choice = 0;

    do{
        cout << "*******************" << endl;
        cout << "Enter your choice: " << endl;
        cout << "*******************" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. EXIT" << endl;
        cin >> choice;

        switch(choice){
            case 1: show_balance(balance);
                    break;
            case 2: balance += deposit();
                    show_balance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    show_balance(balance);
                    break;
            case 4: cout << "Thanks for Visiting" << endl;
                    break;
            default: cout << "Invalid choice" << endl; 
        }
    } while (choice != 4);
    


    return 0;
}