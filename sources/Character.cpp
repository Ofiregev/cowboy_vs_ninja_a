#include "Character.hpp"

namespace ariel {

    Character::Character(Point loc, int score, string name) : location(loc), score(score), name(name) {}

    bool Character::isAlive() {
        return score > 0;
    }

    double Character::distance(const Character& player) {
        return location.distance(player.location);
    }

    void Character::hit(int points) {
        score -= points;
    }

    string Character::getName() {
        return name;
    }

    Point Character::getLocation() {
        return location;
    }
    void Character::setLocation(Point loc) {
    location = loc;
}


    void Character::print() {
        cout << "Name: " << name << ", Score: " << score << ", Location: (" << location.getX() << "," << location.getY() << ")" << endl;
    }

    int Character::getScore() {
    return score;
}


} // namespace ariel
