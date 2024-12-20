/* Obelchak Vyachaslav st129564@student.spbu.ru
   Home assignment #4*/
#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <memory>
#include "Weapon.h"
#include "Alliance.h"
#include <ostream> 

class Transformer {
public:
    Transformer() = default;
    Transformer(const std::string& name, int powerLevel, int speed = 0, const Weapon& weapon = Weapon("Default"), std::shared_ptr<Alliance> alliance = nullptr);
    ~Transformer();

    std::string getName() const;
    int getPowerLevel() const;
    int getSpeed() const;
    const Weapon& getWeapon() const;
    std::shared_ptr<Alliance> getAlliance() const;

    void setPowerLevel(int power);
    void setSpeed(int speed);
    void setWeapon(const Weapon& weapon);
    void setAlliance(std::shared_ptr<Alliance> alliance);

    virtual std::string attack() const;
    virtual void transform() const;
    void displayInfo() const; 

    friend std::ostream& operator<<(std::ostream& os, const Transformer& t);

    bool operator<(const Transformer& other) const;
    bool operator>(const Transformer& other) const;
    bool operator==(const Transformer& other) const; // Добавлены нужные операторы

protected:
    std::string name_;
    int powerLevel_;
    int speed_;
    Weapon weapon_;
    std::shared_ptr<Alliance> alliance_; 
};

#endif
