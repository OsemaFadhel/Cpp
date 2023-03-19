#include <iostream>

using namespace std;

void bake_pizza(){
    cout << "Here is your pizza!" << endl;
}
void bake_pizza(string topping1){
    cout << "Here is your " << topping1 << " pizza!" << endl;
}
void bake_pizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!" << endl;
}

int main(){


    bake_pizza();
    bake_pizza("Pepperoni");
    bake_pizza("Pineapple", "Chicken");
    
    return 0;
}