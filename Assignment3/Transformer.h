/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <memory>
#include "Weapon.h"
#include "Alliance.h"

class Transformer {
public:
    Transformer(const std::string& name, int powerLevel, int speed, const Weapon& weapon, std::shared_ptr<Alliance> alliance);
    ~Transformer(); // Добавлены методы для weapon_, поле для ассоциации alliance_

    std::string getName() const;
    int getPowerLevel() const;
    int getSpeed() const;
    const Weapon& getWeapon() const;
    std::shared_ptr<Alliance> getAlliance() const;

    void setPowerLevel(int power);
    void setSpeed(int speed);
    void setWeapon(const Weapon& weapon); // Добалены методы для weapon_
    void setAlliance(std::shared_ptr<Alliance> alliance); // Методы для работы с полем alliance_

    virtual std::string attack() const;
    virtual void transform() const; // Новый метод
    void displayInfo() const; // Новый метод

protected:
    std::string name_;
    int powerLevel_;
    int speed_;
    Weapon weapon_;
    std::shared_ptr<Alliance> alliance_; // Методы для работы с полем alliance_
};

#endif
