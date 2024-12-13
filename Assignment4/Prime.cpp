/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#include "Prime.h"

Prime::Prime(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly)
	: Autobot(name, powerLevel, speed, weapon, canFly) {}

std::string Prime::attack() const {
	return Autobot::attack() + " (Prime)";
}

std::ostream& operator<<(std::ostream& os, const Prime& prime) {
    os << static_cast<const Autobot&>(prime);
    return os;
}
