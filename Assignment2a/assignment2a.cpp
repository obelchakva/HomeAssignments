//Assignment 2a - работа с бинарным файлом
#include <iostream>
#include <fstream>
#include <filesystem>
int main() {
	std::ifstream infile("input.bin", std::ios::binary);
	if (!infile) {
		std::cout << "Ошибка при открытии файла" << std::endl;
		return 1;
	}
	std::streamsize size = std::filesystem::file_size("input.bin");
	int* array = new int[size / sizeof(int)];
	infile.read(reinterpret_cast<char*>(array), size);
	infile.close();
	for (size_t i=0; i <size / sizeof(int) / 2; ++i) {
		std::swap(array[i], array[size / sizeof(int) -1 -i]);
	}
	std::ofstream outfile("outfile.bin", std::ios::binary);
	if (!outfile) {
		std::cout << "Ошибка при открытии выходного файла" << std::endl;
		delete[] array;
		return 1;
	}
	outfile.write(reinterpret_cast<char*>(array), size);
	outfile.close();
	delete[] array;
	std::cout << "Данные успешно обработаны и записаны в новый файл" << std::endl;
	return 0;
}
