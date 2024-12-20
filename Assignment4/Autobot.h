/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly, std::shared_ptr<Alliance> alliance);
    
    bool getCanFly() const;
    void setCanFly(bool canFly);
    std::string attack() const override;

    // Переопределяем оператор << для вывода дополнительной информации
    friend std::ostream& operator<<(std::ostream& os, const Autobot& a);

    // Переопределяем операторы сравнения
    bool operator<(const Autobot& other) const;
    bool operator>(const Autobot& other) const;
    bool operator==(const Autobot& other) const;

private:
    bool canFly_;
};

#endif
