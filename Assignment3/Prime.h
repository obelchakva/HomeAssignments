#ifndef PRIME_H
#define PRIME_H

#include "Autobot.h"

class Prime : public Autobot {
public:
	Prime(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly);
	std::string attack() const override;
};

#endif
