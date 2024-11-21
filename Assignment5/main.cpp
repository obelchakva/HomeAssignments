//main.cpp
#include <iostream>
#include <vector>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"

int main() {
    Autobot optimus("Optimus Prime", 100);
    Decepticon megatron("Megatron", 90);

    // Тест вызова виртуальных методов явно
    optimus.transform();
    megatron.transform();

    // Тест вызова виртуальных методов через указатели базового класса
    Transformer* t1 = &optimus;
    Transformer* t2 = &megatron;

    t1->openFire();
    t2->openFire();

    // Создание вектора из указателей
    std::vector<Transformer*> transformers = {
        new Autobot("Bumblebee", 70), new Autobot("Ratchet", 60), new Autobot("Ironhide", 80),
        new Decepticon("Starscream", 85), new Decepticon("Soundwave", 75), new Decepticon("Shockwave", 95)
    };

    // Тест вызова виртуальных методов в цикле
    for (const auto& transformer : transformers) {
        transformer->ultraMove();
    }

    // Очистка памяти
    for (auto& transformer : transformers) {
        delete transformer;
    }

    return 0;
}

