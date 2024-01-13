#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee {
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    
    void Introduction() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18) {
            Age = age;
        }
    }
    int getAge() {
        return Age;
    }

    void AskForPromotion() {
        if (Age > 30) {
            cout << Name << " Got Promoted!" << endl;
        } else {
            cout << Name << " You can not be promoted!" << endl;
        }
    }
};

int main() {
    Employee employee1("Prakhar", "Orbit", 22);
    Employee employee2("John", "Orbit1", 32);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}