#ifndef COWBOY_HPP
#define COWBOY_HPP
#include <iostream>
#include <string>
#include "Character.hpp"
using namespace std;
     
namespace ariel {
    class Cowboy : public Character {
        private:
            int num_of_bullets;
            
        public:
            Cowboy(string name, Point location);

            void setBullets(int bul);   
            void shoot(Character * enemy);
            bool hasboolets();
            void reload();
            void print();


    };
}

    


#endif