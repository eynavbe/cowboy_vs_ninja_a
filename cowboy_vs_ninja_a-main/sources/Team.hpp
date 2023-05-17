#include <iostream>
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Cowboy.hpp"
#include "Character.hpp"

#include <string>

using namespace std;

#ifndef TEAM_H
#define TEAM_H
namespace ariel
{
class Team {
private:
	Character* characters[10];
    Character * leader;
    

public:
	// Team(Character *leaderT): characters(charactersCreate(leaderT)), leader(leaderT) { }

	Team(Character *leaderT):  leader(leaderT) {
                    charactersCreate(leaderT);

     }

    // Character** charactersCreate(Character * leader){
    //     Character* characters[10];
    //     characters[0] = leader;
    //     return characters;
    // }

      void charactersCreate(Character* leader) {
            for (int i = 0; i < 10; i++) {
                characters[i] = nullptr;
            }
            characters[0] = leader;
        }


	Character * getLeader() const {
		return leader;
	}
	Character** getCharacters() {
            return characters;
        }

	// operator string() const {             
	// 	return to_string(location)+","+to_string(hitPoint)+","+to_string(name);
	// }

	// void print() {
    //     std::string printTeem = "";
    //     for(int i=0; i<10; i++){
	// 	   printTeem+= std::to_string(characters[i])+" , ";
    //     }   
    //      cout <<   printTeem << endl;         
	// }

virtual void print() {
            std::string printTeam = "";
            for (int i = 0; i < 10; i++) {
                if (characters[i] != nullptr) {
                    printTeam += "Character #" + std::to_string(i + 1) + ": " + characters[i]->getName() + " , ";
                }
            }
            std::cout << printTeam << std::endl;
        }

    int stillAlive()const;
    void add(Character* character1)const;

    void attack(Team* enemy)const;

    ~Team(){
        for(int i=0; i<10;i++){
        delete characters[i];

        }
                // delete leader;

    }

};
#endif

}

