#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Game {
private:
    int players;
    int yourHits = 0;
    int enemyHits = 0;
public:
    Game(int p) {
        players = p;
    }
    void play() {
        srand(time(0));
        cout << "Total No. of players in your team: " << players << endl;
        for(int i = 1; i <= players; i++) {
            int num1 = rand() % 5 + 1;
            int num2 = rand() % 5 + 1;
            cout << "\nPair of numbers:\n";
            cout << "Number1: " << num1 << endl;
            cout << "Number2: " << num2 << endl;

            if(num1 == num2) {
                cout << "Enemy got hit by your team!\n";
                yourHits++;
            } else {
                cout << "You got hit by the enemy team!\n";
                enemyHits++;
            }
        }
        cout << "\nGame Over!\n";
        if (yourHits > enemyHits)
            cout << "You won!\n";
        else
            cout << "Enemy won!\n";
    }
};
int main() {
    int players;
    cout << "Enter number of players: ";
    cin >> players;

    Game g(players);
    g.play();

    return 0;
}

