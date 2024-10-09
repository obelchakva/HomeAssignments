#include <iostream>
#include <fstream>
int main() {
	std::ofstream outfile("input.bin", std::ios::binary);
	for (int i = 0; i<10; ++i) {
		outfile.write(reinterpret_cast<char*>(&i), sizeof(i));
	}
	outfile.close();
	std::cout << "Файл input.bin успешно создан" << std::endl;
	return 0;
}
