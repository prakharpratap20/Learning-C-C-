#include <iostream>
using namespace std;

double cube(double num);


int main() {
    cout << cube(3);

    return 0;
}

double cube(double num){
    return num * num * num;
}