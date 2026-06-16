#include <iostream>
#include <string>
using namespace std;
// ---------- Base Class ----------
class Item {
protected:
    string name;
    int quantity;
public:
    void setItem(string n, int q) {
        name = n;
        quantity = q;
    }
    int getQuantity() {
        return quantity;
   }
   string getName() {
        return name;
    }
};
// ---------- Derived from Item ----------
class BakedGoods : public Item {
protected:
    float discount = 0.10;   // 10%
public:
    float applyDiscount(float total) {
        return total - (total * discount);
    }
};
// ---------- Derived from BakedGoods ----------
class Cakes : public BakedGoods {
private:
    float price = 600;
public:
    float calculateBill() {
        float total = price * quantity;
        return applyDiscount(total);
    }
};
// ---------- Derived from BakedGoods ----------
class Bread : public BakedGoods {
private:
    float price = 200;
public:
    float calculateBill() {
        float total = price * quantity;
        return applyDiscount(total);
    }
};
// ---------- Derived from Item ----------
class Drinks : public Item {
private:
    float price = 100;
    float discount = 0.05;   // 5%
public:
    float calculateBill() {
        float total = price * quantity;
        return total - (total * discount);
    }
};
// ---------- Main Function ----------
int main() {
    int choice, qty;
    float bill = 0;
    cout << "1. Cakes\n2. Bread\n3. Drinks\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter quantity: ";
    cin >> qty;
    if (choice == 1) {
        Cakes c;
        c.setItem("Cake", qty);
        bill = c.calculateBill();
    }
    else if (choice == 2) {
        Bread b;
        b.setItem("Bread", qty);
        bill = b.calculateBill();
    }
    else if (choice == 3) {
        Drinks d;
        d.setItem("Drinks", qty);
        bill = d.calculateBill();
    }
    else {
        cout << "Invalid choice";
        return 0;
    }
    cout << "Total Bill = " << bill << endl;
    return 0;
}

