//Autobot.cpp
#include "Autobot.h"

Autobot::Autobot(const std::string& name, int powerLevel)
    : Transformer(name, powerLevel) {}

void Autobot::transform() const {
    std::cout << "Autobot::transform() from " << name_ << std::endl;
}

void Autobot::openFire() const {
    std::cout << "Autobot::openFire() from " << name_ << std::endl;
}

void Autobot::ultraMove() const {
    std::cout << "Autobot::ultraMove() from " << name_ << std::endl;
}
