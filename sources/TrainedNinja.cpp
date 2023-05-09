#include "TrainedNinja.hpp"

namespace ariel {

    TrainedNinja::TrainedNinja(string name, Point location) : Ninja(location, 100, name) {
        setSpeed(10);
    }

} // namespace ariel
