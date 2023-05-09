#include "OldNinja.hpp"

namespace ariel {
    OldNinja::OldNinja(string name, Point location) : Ninja(location, 50, name) {
        setSpeed(1);
    }
}
