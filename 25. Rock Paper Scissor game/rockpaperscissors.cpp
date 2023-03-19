#include <iostream>
#include <ctime>


using namespace std;

char get_user_choice(){
    
    char player;
    cout << "Rock-Paper-Scissors Game!" << endl;
    
    do{
        cout << "Choose one of the following" << endl;
        cout << "*************************" << endl;
        cout << "'r' for rock" << endl;
        cout << "'p' for paper" << endl;
        cout << "'s' for scissors" << endl;
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char get_computer_choice(){
   
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num){
        case 1: return 'r'; //using return there is no need to use break
        case 2: return 'p';
        case 3: return 's'; 
    }

    return 0;
}
void show_choice(char choice){

    switch(choice){
        case 'r' : cout << "Rock" << endl;
            break;
        case 'p' : cout << "Paper" << endl;
            break;
        case 's' : cout << "Scissors" << endl;
            break;
    } 
}
void choose_winner(char player, char computer){
       
    switch(player){
        case 'r':   if(computer == 'r'){
                        cout << "It's a tie!";
                    }
                    else if(computer == 'p'){
                        cout << "You Lost!";
                    }
                    else{
                        cout << "You won!";
                    }
                    break;
        case 'p':   if(computer == 'r'){
                        cout << "You won!";
                    }
                    else if(computer == 'p'){
                        cout << "It's a tie!";
                    }
                    else{
                        cout << "You Lost!";
                    }
                    break;
        case 's':   if(computer == 'r'){
                        cout << "You Lost!";
                    }
                    else if(computer == 'p'){
                        cout << "You won!";
                    }
                    else{
                        cout << "It's a tie!";
                    }
                    break;                        
    }
}

int main(){

    

    char player;
    char computer;

    player = get_user_choice();
    cout << "Your choice: ";
    show_choice(player);

    computer = get_computer_choice();
    cout << "Computer choice: ";
    show_choice(computer);

    choose_winner(player, computer); 

    cout << endl << "*************************" << endl;

    return 0;
}