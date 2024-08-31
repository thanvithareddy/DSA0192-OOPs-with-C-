#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
        cout << "Rectangle created with length " << length << " and width " << width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed." << endl;
    }

    double area() {
        return length * width;
    }

    double perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(10.0, 5.0);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    return 0;
}
