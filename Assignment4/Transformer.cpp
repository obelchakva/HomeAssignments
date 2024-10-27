#include "Transformer.h"

Transformer::Transformer(const std::string& name)
    : name_(name), powerLevel_(0), speed_(0), weapon_(Weapon("Default")) {}

Transformer::Transformer(const std::string& name, int powerLevel)
    : name_(name), powerLevel_(powerLevel), speed_(0), weapon_(Weapon("Default")) {}

Transformer::Transformer(const std::string& name, int powerLevel, int speed, const Weapon& weapon)
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

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
    os << "Transformer Name: " << transformer.getName()
       << ", Power Level: " << transformer.getPowerLevel()
       << ", Speed: " << transformer.getSpeed()
       << ", Weapon: " << transformer.weapon_;
	return os;
}

bool Transformer::operator<(const Transformer& other) const {
	return powerLevel_ < other.powerLevel_;
}

bool Transformer::operator>(const Transformer& other) const {
	return powerLevel_ > other.powerLevel_;
}

bool Transformer::operator==(const Transformer& other) const {
	return powerLevel_ == other.powerLevel_ && speed_ == other.speed_;
}

bool Transformer::operator!=(const Transformer& other) const {
	return !(*this == other);
}
