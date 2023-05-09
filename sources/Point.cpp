#include "Point.hpp"
#include <cmath>

namespace ariel {

    Point::Point(double x, double y) : point_x(x), point_y(y) {}

    double Point::distance(Point p) {
        double dx = point_x - p.point_x;
        double dy = point_y - p.point_y;
        return sqrt(dx*dx + dy*dy);
    }

    double Point::getX() {
        return point_x;
    }

    double Point::getY() {
        return point_y;
    }

    void Point::print() {
        cout << "(" << point_x << "," << point_y << ")" << endl;
    }

    Point Point::moveTowards(Point dest, double distance) {
        double dx = dest.point_x - point_x;
        double dy = dest.point_y - point_y;
        double d = sqrt(dx*dx + dy*dy);
        if (d < distance) {
            return dest;
        }
        else {
            double r = distance / d;
            double x = point_x + r*dx;
            double y = point_y + r*dy;
            return Point(x, y);
        }
}




} // namespace ariel
