#include <iostream>
#include <string>
#include "game_character_system.hpp"

constexpr int MAX_LEVEL = 10;
constexpr int NUM_LEVEL_LIMITS = MAX_LEVEL - 1;

Character ::Character(std::string name, unsigned int healthPoints,
                      unsigned int level, unsigned int experiencePoints)
    : name(name), healthPoints(healthPoints), level(level),
      experiencePoints(experiencePoints) {};

Character &Character::damageTaken(unsigned int dmg)
{
    if (dmg >= healthPoints)
        healthPoints = 0;
    else
        healthPoints -= dmg;

    return *this;
}

Mage::Mage(std::string name, unsigned int healthPoints,
           unsigned int level, unsigned int experiencePoints,
           unsigned int magicPoints) : Character(name, healthPoints,
                                                 level, experiencePoints),
                                       magicPoints(magicPoints) {

                                       };
Mage &Mage::regenerateMagicPoints()
{
    std::cout << "Regenerate magic points";
    return *this;
};

Healer &Healer::heal(unsigned int healthPoints, const Character &target)
{
    std::cout << "Heal";
    return *this;
};

Healer::Healer(std::string name, unsigned int healthPoints,
               unsigned int level, unsigned int experiencePoints, unsigned int magicPoints) : Mage(name, healthPoints,
                                                                                                   level, experiencePoints, magicPoints) {};

int main()
{
    Healer myHealer("Gandalf", 100, 5, 44, 125);

    myHealer.heal(100, myHealer).damageTaken(33);

    return 0;
}