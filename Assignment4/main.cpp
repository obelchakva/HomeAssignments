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

	std::cout << optimus << std::endl;
	std::cout << megatron << std::endl;
	std::cout << ultraMagnus << std::endl;

	if (optimus > megatron) {
		std::cout << optimus.getName() << " is stronger than " << megatron.getName() << std::endl;
	} else {
		std::cout << megatron.getName() << " is stronger than " << optimus.getName() << std::endl;
	}

	return 0;
}
