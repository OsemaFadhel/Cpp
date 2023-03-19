#include <iostream>

using namespace std;

int search_array(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        } 
    }
    return -1;
}


int main(){

    int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int my_num;

    cout << "Enter element to search for: " << endl;
    cin >> my_num;

    index = search_array(numbers, size, my_num);

    if(index != -1){
        cout << my_num << " is at index" << index;
    }
    else{
        cout << my_num << " is not in the array";
    }

    return 0;
}
