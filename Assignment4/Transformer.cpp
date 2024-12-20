#include "Transformer.h"
#include <iostream>
#include <iomanip> // Для setw

Transformer::Transformer(const std::string& name, int powerLevel, int speed, const Weapon& weapon, std::shared_ptr<Alliance> alliance)
    : name_(name), powerLevel_(powerLevel), speed_(speed), weapon_(weapon), alliance_(alliance) {}

Transformer::~Transformer() {
    if (alliance_) {
        // Освобождаем ресурсы, если необходимо
    }
}

std::string Transformer::getName() const {
    return name_;
}

int Transformer::getPowerLevel() const {
    return powerLevel_;
}

int Transformer::getSpeed() const {
    return speed_;
}

const Weapon& Transformer::getWeapon() const {
    return weapon_;
}

std::shared_ptr<Alliance> Transformer::getAlliance() const {
    return alliance_;
}

void Transformer::setPowerLevel(int power) {
    powerLevel_ = power;
}

void Transformer::setSpeed(int speed) {
    speed_ = speed;
}

void Transformer::setWeapon(const Weapon& weapon) {
    weapon_ = weapon;
}

void Transformer::setAlliance(std::shared_ptr<Alliance> alliance) {
    alliance_ = alliance;
}

std::string Transformer::attack() const {
    return "Attack with " + weapon_.getName();
}

void Transformer::transform() const {
    std::cout << "Transforming..." << std::endl;
}

void Transformer::displayInfo() const {
    std::cout << "Name: " << name_ << ", Power Level: " << powerLevel_ << ", Speed: " << speed_ << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Transformer& t) {
    os << "Name: " << std::left << std::setw(15) << t.name_ << ", "
       << "Power Level: " << std::right << std::setw(4) << t.powerLevel_ << ", "
       << "Speed: " << std::right << std::setw(4) << t.speed_ << "\n";
    return os;
}

bool Transformer::operator<(const Transformer& other) const {
    return (powerLevel_ + speed_) < (other.powerLevel_ + other.speed_);
}

bool Transformer::operator>(const Transformer& other) const {
    return (powerLevel_ + speed_) > (other.powerLevel_ + other.speed_);
}

bool Transformer::operator==(const Transformer& other) const {
    return (powerLevel_ == other.powerLevel_) && (speed_ == other.speed_);
}
