#include <iostream>

using namespace std;

double get_total(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];    //this line add every double
    }

    return total;
}

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = get_total(prices, size);

    cout << "$" << total;

    return 0;
}