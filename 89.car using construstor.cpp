#include <iostream>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    Car(string carMake, string carModel, int carYear) {
        make = carMake;
        model = carModel;
        year = carYear;
        cout << "Car created: " << make << " " << model << " (" << year << ")" << endl;
    }

    ~Car() {
        cout << "Car destroyed: " << make << " " << model << endl;
    }

    void displayInfo() {
        cout << "Car info: " << make << " " << model << " (" << year << ")" << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2020);
    car.displayInfo();
    return 0;
}
