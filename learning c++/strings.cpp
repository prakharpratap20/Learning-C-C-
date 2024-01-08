#include <iostream>

using namespace std;

int main() {
  string phrase = "pratap";
  cout << "Prakhar Pratap" << endl;
  cout << "Hello" << endl;

  cout << "Prakhar\n";
  cout << "Hello" << endl;

  cout << phrase << endl;
  cout << phrase.length();
  cout << phrase[0];
  cout << phrase.find("tap");
  cout << phrase.substr(2, 3);

  return 0;
}
