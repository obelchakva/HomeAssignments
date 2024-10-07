#include <iostream>
#include <string>
#include "greet.h"
int main() {
	std::cout<<"Hello, world"<<std::endl;
	std::string input;
	while (true) {
		std::cout<<"Введите данные или 'exit' для выхода: ";
		std::getline(std::cin, input);
		if (input=="exit") {
			break;
		}
		greet(input);
	}
	return 0;
}
