/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #6*/
#ifndef TEST_CLASSES_H
#define TEST_CLASSES_H

#include <vector>

// Class1
class Class1 {
public:
    bool bar(int number, std::vector<float>& values) {
        return number > 0;
    }

    int c_1_1() { return 42; }
    float c_1_2() { return 3.14f; }
    void c_1_3() { /* do nothing */ }
};

// Class2
class Class2 {
public:
    bool bar(int, std::vector<float>& values) {
        return !values.empty();
    }

    int c_2_1() { return 21; }
    float c_2_2() { return 2.71f; }
    void c_2_3() { /* do nothing */ }
};

// Class3
class Class3 {
public:
    bool bar(int number, std::vector<float>& values) {
        return number == static_cast<int>(values.size()) * -1;
    }

    int c_3_1() { return 84; }
    float c_3_2() { return 1.61f; }
    void c_3_3() { /* do nothing */ }
};

#endif // TEST_CLASSES_H
