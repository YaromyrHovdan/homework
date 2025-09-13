#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    
    string brand;
    string model;
    int year;
    double speed;

public:
    
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        speed = 0; 
    }

    // Гетери 
    string getBrand() const { return brand; }
    string getModel() const { return model; }
    int getYear() const { return year; }
    double getSpeed() const { return speed; }

    // Сетери
    void setSpeed(double s) {
        if (s >= 0 && s <= 300) {
            speed = s;
        } else {
            cout << "Incorrect speed!" << endl;
        }
    }


    void accelerate(double value) {
        if (speed + value <= 300)
            speed += value;
        else
            speed = 300;
    }

    void brake(double value) {
        if (speed - value >= 0)
            speed -= value;
        else
            speed = 0;
    }

    // Вивід інформації 
    void printInfo() const {
        cout << brand << " " << model << " (" << year << ")"
             << " | Speed: " << speed << " kph " << endl;
    }
};

int main() {
    Car car("BMW", "M5", 2020);

    car.printInfo();
    car.setSpeed(100);
    car.printInfo();

    car.accelerate(50);
    car.printInfo();

    car.brake(200);
    car.printInfo();

    // Спроба некоректного встановлення
    car.setSpeed(-50);

    return 0;
}
