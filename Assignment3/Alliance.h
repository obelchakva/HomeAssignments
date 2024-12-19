/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
// Новый класс Alliance
#ifndef ALLIANCE_H
#define ALLIANCE_H

#include <string>

class Alliance {
public:
    explicit Alliance(const std::string& name) : name_(name) {}
    const std::string& getName() const { return name_; }

private:
    std::string name_;
};

#endif
