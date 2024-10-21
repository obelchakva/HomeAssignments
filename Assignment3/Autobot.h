#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
	Autobot(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly);

	bool getCanFly() const;
	void setCanFly(bool canFly);
	std::string attack() const override;

private:
	bool canFly_;
};

#endif
