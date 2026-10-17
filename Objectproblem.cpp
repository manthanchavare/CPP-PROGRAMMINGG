#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo;
    }
};

int main() {
    Student s;
    s.name = "Aman";
    s.rollNo = 12;
    s.display();
    return 0;
}
