#include "Cowboy.hpp"

namespace ariel {

    Cowboy::Cowboy(string name, Point location) : Character(location, 0, name), num_of_bullets(6) {}

    void Cowboy::setBullets(int bul) {
        num_of_bullets = bul;
    }

    void Cowboy::shoot(Character * enemy) {
        if (num_of_bullets > 0) {
            double dist = distance(*enemy);
            if (dist <= 10) {
                enemy->hit(1);
                cout << getName() << " shoots " << enemy->getName() << "!" << endl;
            }
            else {
                cout << getName() << " missed " << enemy->getName() << "!" << endl;
            }
            num_of_bullets--;
        }
        else {
            cout << getName() << " has no bullets left!" << endl;
        }
    }

    bool Cowboy::hasboolets() {
        return num_of_bullets > 0;
    }

    void Cowboy::reload() {
        num_of_bullets = 6;
        cout << getName() << " reloads!" << endl;
    }

    void Cowboy::print() {
        cout << "Cowboy: " << getName() << ", Location: ";
        getLocation().print();
        cout << ", Score: " << getScore() << ", Bullets: " << num_of_bullets << endl;
    }

} // namespace ariel
