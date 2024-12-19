/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
#include "Transformer.h"
#include <iostream>

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
