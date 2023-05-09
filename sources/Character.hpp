#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "Point.hpp"
using namespace std;
     
namespace ariel {
    class Character {
        private:
            Point location;
            int score;
            string name;
        public:
            Character() : location(0, 0), score(0), name("") {}
            Character(Point loc, int score, string name);
            bool isAlive();
            double distance (const Character& player);
            void hit(int points);
            string getName();
            Point getLocation();
            virtual void print(); 
            int getScore();
            void setLocation(Point loc);



    };
}

    


#endif