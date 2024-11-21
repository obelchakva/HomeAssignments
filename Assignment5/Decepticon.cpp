//Decepticon.cpp
#include "Decepticon.h"

Decepticon::Decepticon(const std::string& name, int powerLevel)
    : Transformer(name, powerLevel) {}

void Decepticon::transform() const {
    std::cout << "Decepticon::transform() from " << name_ << std::endl;
}

void Decepticon::openFire() const {
    std::cout << "Decepticon::openFire() from " << name_ << std::endl;
}

void Decepticon::ultraMove() const {
    std::cout << "Decepticon::ultraMove() from " << name_ << std::endl;
}

