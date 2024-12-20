/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #4
*/
#include <iostream>
#include <memory>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Prime.h"

int main() {
    Weapon blaster("Blaster");
    auto alliance = std::make_shared<Alliance>("Cybertron");

    Autobot optimus("Optimus Prime", 100, 80, blaster, true, alliance);
    Decepticon megatron("Megatron", 90, 75, blaster, {"Invisibility", "Flight"}, alliance);
    Prime ultraMagnus("Ultra Magnus", 95, 85, blaster, true, alliance);

    std::cout << optimus.getName() << " Wielding: " << optimus.attack() << std::endl;
    std::cout << megatron.getName() << " Wilding: " << megatron.attack() << std::endl;
    std::cout << ultraMagnus.getName() << " Wielding: " << ultraMagnus.attack() << std::endl;

    return 0;
}
