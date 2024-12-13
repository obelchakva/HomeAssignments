/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#include "Decepticon.h"

Decepticon::Decepticon(const std::string& name, int powerLevel, int speed, const Weapon& weapon,
const std::vector<std::string>& abilities)
	: Transformer(name, powerLevel, speed, weapon), specialAbilities_(abilities) {}

std::vector<std::string> Decepticon::getSpecialAbilities() const {
	return specialAbilities_;
}

std::string Decepticon::attack() const {
	return Transformer::attack() + " (Decepticon)";
}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
    os << static_cast<const Transformer&>(decepticon)
       << ", Special Abilities: ";
    for (const auto& ability : decepticon.specialAbilities_) {
        os << ability << " ";
    }
    return os;
}
