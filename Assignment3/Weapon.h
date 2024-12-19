/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
// Определение класса Weapon
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    explicit Weapon(const std::string& name) : name_(name) {}
    const std::string& getName() const { return name_; }

private:
    std::string name_;
};

#endif
