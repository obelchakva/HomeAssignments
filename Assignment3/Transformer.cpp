/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
#include "Transformer.h"

Transformer::Transformer(const std::string& name, int powerLevel, int speed,
const Weapon& weapon)
	: name_(name), powerLevel_(powerLevel), speed_(speed), weapon_(weapon) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const {
	return name_;
}

int Transformer::getPowerLevel() const {
	return powerLevel_;
}

int Transformer::getSpeed() const {
	return speed_;
}

void Transformer::setPowerLevel(int power)  {
	powerLevel_ = power;
}

void Transformer::setSpeed(int speed) {
	speed_ = speed;
}

std::string Transformer::attack() const {
	return "Attack with " + weapon_.getName();
}
