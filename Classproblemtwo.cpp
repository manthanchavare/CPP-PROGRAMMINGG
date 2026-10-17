#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    void area() {
        cout << "Area = " << length * breadth;
    }
};

int main() {
    Rectangle r;
    r.length = 5;
    r.breadth = 3;
    r.area();
    return 0;
}
