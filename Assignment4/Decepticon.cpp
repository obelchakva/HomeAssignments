/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#include "Decepticon.h"
#include <iomanip> // Для setw

Decepticon::Decepticon(const std::string& name, int powerLevel, int speed, const Weapon& weapon, const std::vector<std::string>& abilities, std::shared_ptr<Alliance> alliance)
    : Transformer(name, powerLevel, speed, weapon, alliance), specialAbilities_(abilities) {}

std::vector<std::string> Decepticon::getSpecialAbilities() const {
    return specialAbilities_;
}

std::string Decepticon::attack() const {
    return Transformer::attack() + " (Decepticon)";
}

std::ostream& operator<<(std::ostream& os, const Decepticon& d) {
    os << static_cast<const Transformer&>(d); // Вызываем оператор << базового класса
    for (auto ability : d.specialAbilities_)
        os << "Ability: " << ability << "\n"; // Добавляем список способностей
    return os;
}

bool Decepticon::operator<(const Decepticon& other) const {
    // Количество специальных способностей влияет на сравнение
    return (powerLevel_ + speed_ + specialAbilities_.size()) < (other.powerLevel_ + other.speed_ + other.specialAbilities_.size());
}

bool Decepticon::operator>(const Decepticon& other) const {
    return (powerLevel_ + speed_ + specialAbilities_.size()) > (other.powerLevel_ + other.speed_ + other.specialAbilities_.size());
}

bool Decepticon::operator==(const Decepticon& other) const {
    return (powerLevel_ == other.powerLevel_) && (speed_ == other.speed_) && (specialAbilities_ == other.specialAbilities_);
}
