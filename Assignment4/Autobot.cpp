/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#include "Autobot.h"
#include <iomanip> // Для setw

Autobot::Autobot(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly, std::shared_ptr<Alliance> alliance)
    : Transformer(name, powerLevel, speed, weapon, alliance), canFly_(canFly) {}

bool Autobot::getCanFly() const {
    return canFly_;
}

void Autobot::setCanFly(bool canFly) {
    canFly_ = canFly;
}

std::string Autobot::attack() const {
    return Transformer::attack() + " (Autobot)";
}

std::ostream& operator<<(std::ostream& os, const Autobot& a) {
    os << static_cast<const Transformer&>(a); // Вызываем оператор << базового класса
    os << "Can Fly: " << std::boolalpha << a.canFly_ << "\n"; // Добавляем дополнительную информацию
    return os;
}

bool Autobot::operator<(const Autobot& other) const {
    // Если Autobots могут летать, добавляем бонус к сравнению
    int bonus = canFly_ ? 10 : 0;
    return (powerLevel_ + speed_ + bonus) < (other.powerLevel_ + other.speed_ + (other.canFly_ ? 10 : 0));
}

bool Autobot::operator>(const Autobot& other) const {
    int bonus = canFly_ ? 10 : 0;
    return (powerLevel_ + speed_ + bonus) > (other.powerLevel_ + other.speed_ + (other.canFly_ ? 10 : 0));
}

bool Autobot::operator==(const Autobot& other) const {
    return (powerLevel_ == other.powerLevel_) && (speed_ == other.speed_) && (canFly_ == other.canFly_);
}


bool Autobot::lessThan(const Transformer &other) const {
    if (dynamic_cast<const Autobot*>(&other)) {
        const Autobot* otherBot = dynamic_cast<const Autobot*>(&other);
        return (powerLevel_ + speed_ + (canFly_ ? 10 : 0)) < (otherBot->powerLevel_ + otherBot->speed_ + (otherBot->canFly_ ? 10 : 0));
    }
    return Transformer::lessThan(other); // По умолчанию используем базовую логику
}

bool Autobot::greaterThan(const Transformer &other) const {
    if (dynamic_cast<const Autobot*>(&other)) {
        const Autobot* otherBot = dynamic_cast<const Autobot*>(&other);
        return (powerLevel_ + speed_ + (canFly_ ? 10 : 0)) > (otherBot->powerLevel_ + otherBot->speed_ + (otherBot->canFly_ ? 10 : 0));
    }
    return Transformer::greaterThan(other); // По умолчанию используем базовую логику
}

bool Autobot::equalTo(const Transformer &other) const {
    if (dynamic_cast<const Autobot*>(&other)) {
        const Autobot* otherBot = dynamic_cast<const Autobot*>(&other);
        return (powerLevel_ == otherBot->powerLevel_) &&
               (speed_ == otherBot->speed_) &&
               (canFly_ == otherBot->canFly_);
    }
    return Transformer::equalTo(other); // По умолчанию используем базовую логику
}
