/* Obelchak Vyachaslav st129564@student.spbu.ru
   Home assignment #4
*/
#include "Prime.h"
#include <iomanip> // Для setw

Prime::Prime(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly, std::shared_ptr<Alliance> alliance)
    : Autobot(name, powerLevel, speed, weapon, canFly, alliance) {}

std::string Prime::attack() const {
    return Autobot::attack() + " (Prime)";
}

std::ostream& operator<<(std::ostream& os, const Prime& p) {
    os << static_cast<const Autobot&>(p); // Вызываем оператор << родительского класса
    os << "Title: Prime\n"; // Добавляем дополнительную информацию
    return os;
}

bool Prime::operator<(const Prime& other) const {
    // Принимаем во внимание статус Prime
    int bonus = 20; // Допустимый бонус за звание Prime
    return (powerLevel_ + speed_ + bonus) < (other.powerLevel_ + other.speed_ + 20);
}

bool Prime::operator>(const Prime& other) const {
    int bonus = 20;
    return (powerLevel_ + speed_ + bonus) > (other.powerLevel_ + other.speed_ + 20);
}

bool Prime::operator==(const Prime& other) const {
    return (powerLevel_ == other.powerLevel_) && (speed_ == other.speed_);
}
