#include <iostream>

using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee {
private:
    string Company;
    int Age;
protected:
    string Name;

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
    void virtual Work() {
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;
    }
};

class Developer:public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) 
        :Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug() {
        cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work() {
        cout << Name << " is writing " << FavProgrammingLanguage << " code." << endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    void PreparedLesson() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work() {
        cout << Name << " is teaching " << Subject << "." << endl;
    }
};

int main() {
    Developer d = Developer("Prakhar", "Youtube", 25, "C++");
    Teacher t("Jack", "Cool School", 31, "CSs");

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1 -> Work();
    e2 -> Work();
}