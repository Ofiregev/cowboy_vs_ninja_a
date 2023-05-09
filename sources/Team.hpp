#ifndef TEAM_HPP
#define TEAM_HPP
#include <iostream>
#include <string>
#include "Character.hpp"
using namespace std;
     
namespace ariel {
    class Team {
        private:
            Character members[10];
            Character& team_leader;
        public:
            Team(Character &leader);
            friend void add(Character& warrier);
            friend void attack(Team & enemies);
            int stillAlive();
            virtual void print();
            void distructor();



    };
}

    


#endif