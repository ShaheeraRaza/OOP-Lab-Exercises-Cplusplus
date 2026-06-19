#include <iostream>
using namespace std;
class Character {
protected:
    string name;
    int level;
    int health;
public:
    Character(string n, int l, int h) : name(n), level(l), health(h) {}

    void displayCharacter() {
        cout << "Name: " << name << endl;
        cout << "Level: " << level << endl;
        cout << "Health: " << health << endl;
    }
};
class Warrior : virtual public Character {
protected:
    int strength;
public:
    Warrior(string n, int l, int h, int s)
        : Character(n, l, h), strength(s) {}

    void slash() {
        cout << "Performs Slash attack!\n";
    }

    void displayWarrior() {
        cout << "Strength: " << strength << endl;
    }
};
class Mage : virtual public Character {
protected:
    int intelligence;
public:
    Mage(string n, int l, int h, int i)
        : Character(n, l, h), intelligence(i) {}

    void fireball() {
        cout << "Casts Fireball!\n";
    }
    void displayMage() {
        cout << "Intelligence: " << intelligence << endl;
    }
};
class Archer : public Character {
protected:
    int dexterity;
public:
    Archer(string n, int l, int h, int d)
        : Character(n, l, h), dexterity(d) {}
    void rapidShot() {
        cout << "Uses Rapid Shot!\n";
    }

    void displayArcher() {
        displayCharacter();
        cout << "Dexterity: " << dexterity << endl;
    }
};
class NPC : public Character {
    string behavior;
public:
    NPC(string n, int l, int h, string b)
        : Character(n, l, h), behavior(b) {}

    void displayNPC() {
        displayCharacter();
        cout << "Behavior: " << behavior << endl;
    }
};
class Mighty : public Warrior, public Mage {
public:
    Mighty(string n, int l, int h, int s, int i)
        : Character(n, l, h),  // important due to virtual inheritance
          Warrior(n, l, h, s),
          Mage(n, l, h, i) {}

    void display() {
        displayCharacter();
        displayWarrior();
        displayMage();
    }
};
int main() {
    Mighty m("HeroX", 10, 100, 80, 90);
    cout << "\n--- Mighty Character ---\n";
    m.display();
    m.slash();
    m.fireball();
    return 0;
}
