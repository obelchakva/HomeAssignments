/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"
#include <vector>

class Decepticon : public Transformer {
public:
    Decepticon(const std::string& name, int powerLevel, int speed, const Weapon& weapon, const std::vector<std::string>& abilities, std::shared_ptr<Alliance> alliance);

    std::vector<std::string> getSpecialAbilities() const;
    std::string attack() const override;

    // Переопределяем оператор << для вывода дополнительной информации
    friend std::ostream& operator<<(std::ostream& os, const Decepticon& d);

    // Переопределяем операторы сравнения
    bool operator<(const Decepticon& other) const;
    bool operator>(const Decepticon& other) const;
    bool operator==(const Decepticon& other) const;

private:
    std::vector<std::string> specialAbilities_;
};

#endif
