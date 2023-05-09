#ifndef TEAM_HPP
#define TEAM_HPP
#include <iostream>
#include <string>
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YountNinja.hpp"
#include "TrainedNinja.hpp"
using namespace std;
     
namespace ariel {
    class Team {
        private:
            Character members[10];
            Character& team_leader;
        public:
            
            Team(Character *leader);
            void add(Character* warrier);
            void attack(Team * enemies);
            int stillAlive();
            virtual void print();
            void distructor();



    };
}

    


#endif