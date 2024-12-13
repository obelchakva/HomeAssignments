/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
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
