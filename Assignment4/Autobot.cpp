#include "Autobot.h"

Autobot::Autobot(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly)
	: Transformer(name, powerLevel, speed, weapon), canFly_(canFly) {}

bool Autobot::getCanFly() const {
	return canFly_;
}

void Autobot::setCanFly(bool canFly) {
	canFly_ = canFly;
}

std::string Autobot::attack() const {
	return Transformer::attack() + " (Autobot)";
}

std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << static_cast<const Transformer&>(autobot)
       << ", Can Fly: " << (autobot.canFly_ ? "Yes" : "No");
    return os;
}
