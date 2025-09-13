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

   
    string getBrand() const { return brand; }
    string getModel() const { return model; }
    int getYear() const { return year; }
    double getSpeed() const { return speed; }

    
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

     
    void printInfo() const {
        cout << brand << " " << model << " (" << year << ")"
             << " | Speed: " << speed << " kph " << endl;
    }
};

int main() {

    cout << "enter car's brand "<< endl;
    string brand;
    cin >> brand;
    cout << "enter car's model "<< endl;
    string model;
    cin >> model;
    cout << "enter car's year "<< endl;
    int year;
    cin >> year;    
    Car car(brand, model, year);

    car.printInfo();
    car.setSpeed(100);
    car.printInfo();

    car.accelerate(50);
    car.printInfo();

    car.brake(200);
    car.printInfo();

    
    car.setSpeed(-50);

    return 0;
}
