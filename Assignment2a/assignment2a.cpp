//Assignment 2a - работа с бинарным файлом
#include <iostream>
#include <fstream>
#include <filesystem>
 /* В main не должна находиться внутренняя логика программы, это нужно разбивать на функции и классы */
int main() {
	std::ifstream infile("input.bin", std::ios::binary);
	if (!infile) {
		std::cout << "Ошибка при открытии файла" << std::endl;
		return 1;
	}
	std::streamsize size = std::filesystem::file_size("input.bin");
	 /* Если у тебя будет много такого, то не сможешь уследить за всей выделенной памятью, поэтому
	  * следует научиться пользоваться умными указателями или использовать здесь контейнер из 
     	  * стандартной библиотеки (например vector, у него есть метод data(), который вернет массив,
     	  * который можно передать в read) */
	int* array = new int[size / sizeof(int)];
	infile.read(reinterpret_cast<char*>(array), size);
	infile.close();
	for (size_t i=0; i <size / sizeof(int) / 2; ++i) {
		/* Ну нужно же в итоге менять местами отдельные байты, а ты четверки байтов меняешь.
  		 * Массив должен быть типа char */
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
