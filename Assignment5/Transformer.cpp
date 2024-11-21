//Transformer.cpp
#include "Transformer.h"

Transformer::Transformer(const std::string& name, int powerLevel)
    : name_(name), powerLevel_(powerLevel) {}

Transformer::~Transformer() {}

std::string Transformer::getName() const {
    return name_;
}

int Transformer::getPowerLevel() const {
    return powerLevel_;
}

void Transformer::transform() const {
    std::cout << "Transformer::transform() from " << name_ << std::endl;
}

void Transformer::openFire() const {
    std::cout << "Transformer::openFire() from " << name_ << std::endl;
}

void Transformer::ultraMove() const {
    std::cout << "Transformer::ultraMove() from " << name_ << std::endl;
}
