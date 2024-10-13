#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
 /* На самом деле так делать нехорошо, потому что это загрязняет
 * пространство имен и иногда провоцирует конфликты имет, поэтому 
 * привыкай просто везде писать std:: */
using namespace std;
// А если больше нужно будет?
const int MAX_SIZE = 100;
class Stack {
private:
    int* arr;
    int top;
public:
    Stack() {
        arr = new int[MAX_SIZE];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int value) {
        if (top < MAX_SIZE - 1) {
            arr[++top] = value;
        } else {
            // Для такого есть отдельный поток cerr
            cout << "Стек переполнен!" << endl;
            /* endl не просто выводит символ новой строки, а делает еще и дополнительные
             * операции, что тоже может замедлить программу. Поэтому тут лучше использовать
             * '\n' */
        }
    }
    int pop() {
        if (top >= 0) {
            return arr[top--];
        } else {
            // В этом случае обычно кидают исключение
            cout << "Стек пуст!" << endl;
            return 0;
        }
    }
    int peek() {
        if (top >= 0) { 
            return arr[top];
        } else {
            cout << "Стек пуст!" << endl;
            return 0;
        }
    }
};
int main() {
    Stack stack;
    string input;
    cout << "Введите выражение в обратной польской записи (числа и операторы, разделенные пробелами): ";
    getline(cin, input);
    stringstream ss(input);
    string token;
    while (ss >> token) {
        if (isdigit(token[0]) || (token.length() > 1 && token[0] == '-')) {
            stack.push(stoi(token));
        } else {
            int b = stack.pop();
            int a = stack.pop();
            // Хотелось бы отделить калькулятор в функцию или класс
            if (token == "+") {
                stack.push(a + b);
            } else if (token == "-") {
                stack.push(a - b);
            } else if (token == "*") {
                stack.push(a * b);
            } else if (token == "/") {
                if (b != 0) {
                    stack.push(a / b);
                } else {
                    cout << "Ошибка: деление на ноль!" << endl;
                    return 1;
                }
            } else {
                cout << "Ошибка: неизвестный оператор " << token << endl;
                return 1;
            }
        }
    }
    cout << "Результат: " << stack.peek() << endl;
    return 0;
}
