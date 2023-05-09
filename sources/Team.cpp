#include "Team.hpp"

namespace ariel {

    Team::Team(Character *leader) : team_leader(*leader){}

    void Team::add(Character* warrior) {
        for (int i = 0; i < 10; i++) {
            if (members[i].getName().empty()) {
                members[i] = *warrior;
                break;
            }
        }
    }

    void Team::attack(Team* enemies) {
        cout << team_leader.getName() << " is leading the attack!" << endl;
        for (int i = 0; i < 10; i++) {
            if (!members[i].getName().empty() && members[i].isAlive()) {
                cout << members[i].getName() << " is attacking!" << endl;
                Character* target = enemies->members;
                int num_of_enemies = 10;
                for (int j = 0; j < 10; j++) {
                    if (!target[j].getName().empty() && target[j].isAlive()) {
                        if (members[i].distance(target[j]) < 10) {
                            members[i].hit(1);
                            cout << members[i].getName() << " hit " << target[j].getName() << "!" << endl;
                            if (!target[j].isAlive()) {
                                cout << target[j].getName() << " is dead." << endl;
                                num_of_enemies--;
                            }
                        }
                    }
                }
                if (num_of_enemies == 0) {
                    cout << "All enemies are dead. " << team_leader.getName() << " and " << stillAlive() << " other members of the team are victorious!" << endl;
                    return;
                }
            }
        }
        cout << "The attack failed. " << stillAlive() << " members of the team are still alive." << endl;
    }

    int Team::stillAlive() {
        int count = 0;
        for (int i = 0; i < 10; i++) {
            if (members[i].isAlive()) {
                count++;
            }
        }
        return count;
    }

    void Team::print() {
        cout << "The team leader is " << team_leader.getName() << "." << endl;
        cout << "The members of the team are:" << endl;
        for (int i = 0; i < 10; i++) {
            if (!members[i].getName().empty()) {
                members[i].print();
            }
        }
    }

    void Team::distructor() {
        for (int i = 0; i < 10; i++) {
            if (!members[i].getName().empty()) {
                delete &members[i];
            }
        }
    }
} // namespace ariel
