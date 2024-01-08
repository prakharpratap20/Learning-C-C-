#include <iostream>

using namespace std;

int main() {
    string charName = "tom";
    int charAge = 70;
    charAge = 35;

    cout << "There once was a man named " << charName << "." << endl;
    cout << "He was " << charAge << " years old." << endl;

    charName = "Mike";
    cout << "He liked the name " << charName << "." << endl; // Updated this line
    cout << "But did not like being " << charAge << "." << endl;

    return 0;
}
