#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
#include <string>
using namespace std;
     
namespace ariel {
    class Point {
        private:
            double point_x;
            double point_y;
        public:
            Point(double x, double y);
            friend double distance(Point p);
            void print();
            friend Point moveTowards(Point dest, double distance); 


    };
}

    


#endif