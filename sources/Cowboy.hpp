#ifndef COWBOY_HPP
#define COWBOY_HPP
#include <iostream>
#include <string>
#include "Character.hpp"
using namespace std;
     
namespace ariel {
    class Cowboy : protected Character {
        private:
            int num_of_bullets;
            
        public:
            void setBullets(int bul);   
            friend void shoot(Character & enemy);
            bool hasboolets();
            void reload();
            void print();


    };
}

    


#endif