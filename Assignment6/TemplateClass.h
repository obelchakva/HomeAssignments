/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #6*/
#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H

#include <vector>
#include <iostream>

// Шаблонный класс
template <typename T>
class TemplateClass {
private:
    T instance;
    int number;
    std::vector<float> values;

public:
    TemplateClass(T obj, int num, const std::vector<float>& vec) 
        : instance(obj), number(num), values(vec) {}

    bool foo() {
        return instance.bar(number, values);
    }
};

// Специализация для int
template <>
class TemplateClass<int> {
public:
    TemplateClass(int, int, const std::vector<float>&) {}

    bool foo() {
        return true;
    }
};

// Специализация для double
template <>
class TemplateClass<double> {
public:
    TemplateClass(double, int, const std::vector<float>&) {}

    bool foo() {
        return false;
    }
};

#endif // TEMPLATE_CLASS_H
