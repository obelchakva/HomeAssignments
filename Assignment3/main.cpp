#include <iostream>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Prime.h"

int main() {
	Weapon blaster("Blaster");
	Autobot optimus("Optimus Prime", 100, 80, blaster, true);
	Decepticon megatron("Megatron", 90, 75, blaster, {"Invisibility", "Flight"});
	Prime ultraMagnus("Ultra Magnus", 95, 85, blaster, true);

	std::cout << optimus.getName() << " Wielding: " << optimus.attack() << std::endl;
	std::cout << megatron.getName() << " Wilding: " << megatron.attack() << std::endl;
	std::cout << ultraMagnus.getName() << " Wielding: " << ultraMagnus.attack() << std::endl;
	return 0;
}
