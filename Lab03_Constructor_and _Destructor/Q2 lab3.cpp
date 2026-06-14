#include <iostream>
using namespace std;
class Character {
private:
    int* health;
    int* attackPower;
    int* defense;
public:
    // Default Constructor
    Character() {
        health = new int(100);
        attackPower = new int(50);
        defense = new int(30);
    }
    // Parameterized Constructor
    Character(int h, int a, int d) {
        health = new int(h);
        attackPower = new int(a);
        defense = new int(d);
    }
    // Copy Constructor (Deep Copy)
    Character(const Character& other) {
        health = new int(*(other.health));
        attackPower = new int(*(other.attackPower));
        defense = new int(*(other.defense));
    }
    // Getters
    int getHealth() const { return *health; }
    int getAttackPower() const { return *attackPower; }
    int getDefense() const { return *defense; }
    // Setters
    void setHealth(int h) { *health = h; }
    void setAttackPower(int a) { *attackPower = a; }
    void setDefense(int d) { *defense = d; }
    void display() const {
        cout << "Health: " << *health
             << ", Attack Power: " << *attackPower
             << ", Defense: " << *defense << endl;
    }
    // Destructor
    ~Character() {
        delete health;
        delete attackPower;
        delete defense;
    }
};
int main() {
    Character hero1;   // Default
    cout << "Hero1 (Default): ";
    hero1.display();
    
    Character hero2(150, 80, 60);   // Parameterized
    cout << "Hero2 (Parameterized): ";
    hero2.display();

    Character hero3 = hero2;   // Copy constructor
    cout << "Hero3 (Copied from Hero2): ";
    hero3.display();

    return 0;
}

