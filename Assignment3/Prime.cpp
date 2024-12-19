#include "Prime.h"

Prime::Prime(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly, std::shared_ptr<Alliance> alliance)
    : Autobot(name, powerLevel, speed, weapon, canFly, alliance) {}

std::string Prime::attack() const {
    return Autobot::attack() + " (Prime)";
}
