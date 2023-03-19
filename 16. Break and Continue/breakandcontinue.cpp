#include <iostream>

using namespace std;

// break = break out of a loop
// continue = skip current iteration

int main() {
    
    //break
    
    for(int i = 1; i <= 20; i++){
        if(i == 13){
            break;
        }
        cout << i << endl;

    }

    cout << endl;
    
    //continue
    
    for(int i = 1; i <= 20; i++){
        if(i == 13){
            continue;
        }
        cout << i << endl;
    }

    return 0;
}