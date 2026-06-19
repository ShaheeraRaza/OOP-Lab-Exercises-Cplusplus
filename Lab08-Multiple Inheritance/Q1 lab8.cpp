#include <iostream>
using namespace std;
class Vehicle {
protected:
    string type, make, model, color;
    int year;
    double miles;
public:
    Vehicle(string t, string mk, string mdl, string c, int y, double m)
        : type(t), make(mk), model(mdl), color(c), year(y), miles(m) {}

    void displayVehicle() {
        cout << "Type: " << type << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Year: " << year << endl;
        cout << "Miles: " << miles << endl;
    }
};
class GasVehicle : public Vehicle {
protected:
    double fuelTank;
public:
    GasVehicle(string t, string mk, string mdl, string c, int y, double m, double f)
        : Vehicle(t, mk, mdl, c, y, m), fuelTank(f) {}

    void displayGas() {
        cout << "Fuel Tank Size: " << fuelTank << endl;
    }
};
class ElectricVehicle : public Vehicle {
protected:
    double battery;
public:
    ElectricVehicle(string t, string mk, string mdl, string c, int y, double m, double b)
        : Vehicle(t, mk, mdl, c, y, m), battery(b) {}

    void displayElectric() {
        cout << "Battery Capacity: " << battery << endl;
    }
};
class HighPerformance : public GasVehicle {
protected:
    int horsepower, topSpeed;
public:
    HighPerformance(string t, string mk, string mdl, string c, int y, double m,
                    double f, int hp, int ts)
        : GasVehicle(t, mk, mdl, c, y, m, f), horsepower(hp), topSpeed(ts) {}

    void displayHP() {
        cout << "Horsepower: " << horsepower << endl;
        cout << "Top Speed: " << topSpeed << endl;
    }
};
class HeavyVehicle : public GasVehicle {
protected:
    double maxWeight;
    int wheels;
    double length;
public:
    HeavyVehicle(string t, string mk, string mdl, string c, int y, double m,
                 double f, double w, int wh, double l)
        : GasVehicle(t, mk, mdl, c, y, m, f),
          maxWeight(w), wheels(wh), length(l) {}

    void displayHeavy() {
        cout << "Max Weight: " << maxWeight << endl;
        cout << "Wheels: " << wheels << endl;
        cout << "Length: " << length << endl;
    }
};
class SportsCar : public HighPerformance {
    string gearbox, drive;
public:
    SportsCar(string t, string mk, string mdl, string c, int y, double m,
              double f, int hp, int ts, string g, string d)
        : HighPerformance(t, mk, mdl, c, y, m, f, hp, ts),
          gearbox(g), drive(d) {}

    void display() {
        displayVehicle();
        displayGas();
        displayHP();
        cout << "Gearbox: " << gearbox << endl;
        cout << "Drive: " << drive << endl;
    }
};
class ConstructionTruck : public HeavyVehicle {
    string cargo;
public:
    ConstructionTruck(string t, string mk, string mdl, string c, int y, double m,
                      double f, double w, int wh, double l, string cg)
        : HeavyVehicle(t, mk, mdl, c, y, m, f, w, wh, l),
          cargo(cg) {}

    void display() {
        displayVehicle();
        displayGas();
        displayHeavy();
        cout << "Cargo: " << cargo << endl;
    }
};

class Bus : public HeavyVehicle, public ElectricVehicle {
    int seats;
public:
    Bus(string t, string mk, string mdl, string c, int y, double m,
        double f, double w, int wh, double l,
        double b, int s)
        : HeavyVehicle(t, mk, mdl, c, y, m, f, w, wh, l),
          ElectricVehicle(t, mk, mdl, c, y, m, b),
          seats(s) {}
    void display() {
        HeavyVehicle::displayVehicle(); // avoid ambiguity
        displayGas();
        displayHeavy();
        displayElectric();
        cout << "Seats: " << seats << endl;
    }
};
int main() {
    Bus b("Bus", "Toyota", "Coaster", "White", 2022, 15000,
          60, 10000, 6, 10, 200, 40);

    b.display();
    return 0;
}
