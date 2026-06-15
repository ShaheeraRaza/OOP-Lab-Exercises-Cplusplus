#include <iostream>
using namespace std;
class HotelMercato {
private:
    string customerName;
    int daysStayed;
    double rent;
    const double perDayRent;
public:
    // initializer list for const member
    HotelMercato(string name, int days)
        : customerName(name), daysStayed(days), rent(0.0), perDayRent(1000.85) {}
    void calculateRent() {
        if (daysStayed > 7)
            rent = (daysStayed - 1) * perDayRent;  // discount rule
        else
            rent = daysStayed * perDayRent;
    }
    // will not modify any data member
    void display() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Days Stayed: " << daysStayed << endl;
        cout << "Rent: " << rent << endl;
    }
};
int main() {
    HotelMercato customer("Ali", 10);

    customer.calculateRent();
    customer.display();
    return 0;
}


