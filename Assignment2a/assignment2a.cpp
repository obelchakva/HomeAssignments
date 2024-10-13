#include <iostream>
#include <fstream>
#include <vector>
#include <filesystem>
#include <algorithm>
std::vector<char> readFile(const std::string& filename) {
    std::ifstream infile(filename, std::ios::binary);
    if (!infile) {
        throw std::runtime_error("Ошибка при открытии файла " + filename);
    }
    std::streamsize size = std::filesystem::file_size(filename);
    std::vector<char> buffer(size);
    infile.read(buffer.data(), size);
    infile.close();
    return buffer;
}
void writeFile(const std::string& filename, const std::vector<char>& data) {
    std::ofstream outfile(filename, std::ios::binary);
    if (!outfile) {
        throw std::runtime_error("Ошибка при открытии выходного файла " + filename);
    }
    outfile.write(data.data(), data.size());
    outfile.close();
}
void reverseBytes(std::vector<char>& data) {
    std::reverse(data.begin(), data.end());
}
int main() {
    try {
        std::vector<char> data = readFile("input.bin");
        reverseBytes(data);
        writeFile("outfile.bin", data);
        std::cout << "Данные успешно обработаны и записаны в новый файл" << std::endl;
    } 
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
    return 0;
}
