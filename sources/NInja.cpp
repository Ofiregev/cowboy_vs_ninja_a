#include "Ninja.hpp"

namespace ariel {
    Ninja::Ninja(Point loc, int score, string name) : Character(loc, score, name), speed(0) {}

    void Ninja::setSpeed(int s) {
        speed = s;
    }

    void Ninja::move(Character* enemy) {
        Point enemy_loc = enemy->getLocation();
        double dist = distance(*enemy);
        double dx = (enemy_loc.getX() - getLocation().getX()) / dist;
        double dy = (enemy_loc.getY() - getLocation().getY()) / dist;
        Point new_loc(getLocation().getX() + speed * dx, getLocation().getY() + speed * dy);
        setLocation(new_loc);
    }

    void Ninja::slash(Character* enemy) {
        if (distance(*enemy) <= 2) {
            enemy->hit(20);
        }
    }

    void Ninja::print() {
        cout << "Ninja " << getName() << " at location " << getLocation().getX() << "," << getLocation().getY()
            << ", with speed " << speed << " and score " << getScore() << endl;
    }
}
