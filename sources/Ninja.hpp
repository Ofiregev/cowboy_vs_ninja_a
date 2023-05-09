#ifndef NINJA_HPP
#define NINJA_HPP
#include <iostream>
#include <string>
#include "Character.hpp"
using namespace std;
     
namespace ariel {
    class Ninja : protected Character {
        private:
            int speed;
            
        public:
            void setSpeed(int s);
            friend void move(Character& enemy);
            friend void slash(Character& enemy);
            void print();


    };
}

    


#endif