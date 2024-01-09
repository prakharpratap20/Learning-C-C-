#include <iostream>

using namespace std;

int main(){
    int index = 1;
    while (index <= 5) {
        cout << index << endl;
        index++;
    }
    // equivalent for loop 
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;;
    }

    int nums[] = {1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 9; i++) {
        cout << nums[i] << endl;
    }


    return 0;
}