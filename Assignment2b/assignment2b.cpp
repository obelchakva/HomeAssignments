#include <sstream>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
const int MAX_SIZE = 100;
class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack() : top(-1) {}
    void push(int value) {
        if (top < MAX_SIZE - 1) {
            arr[++top] = value;
        } else {
            // Используем cerr для вывода ошибок
            std::cerr << "Стек переполнен!" << '\n';
        }
    }
    int pop() {
        if (top >= 0) {
            return arr[top--];
        } else {
            // Генерируем исключение в случае ошибки
            throw std::underflow_error("Стек пуст!");
        }
    }
    int peek() const {
        if (top >= 0) {
            return arr[top];
        } else {
            throw std::underflow_error("Стек пуст!");
        }
    }
    bool isEmpty() const {
        return top < 0;
    }
    bool isFull() const {
        return top >= MAX_SIZE - 1;
    }
};
class Calculator {
public:
    static int evaluate(const std::string& expression) {
        Stack stack;
        std::istringstream tokens(expression);
        std::string token;
        while (tokens >> token) {
            if (isdigit(token[0])) {
                stack.push(std::stoi(token));
            } else {
                int b = stack.pop();
                int a = stack.pop();
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
                        std::cerr << "Ошибка: деление на ноль!" << '\n';
                        return 1;
                    }
                } else {
                    std::cerr << "Ошибка: неизвестный оператор " << token << '\n';
                    return 1;
                }
            }
        }
        return stack.peek();
    }
};
int main() {
    std::string expression;
    std::cout << "Введите выражение в обратной польской нотации: ";
    std::getline(std::cin, expression);
    try {
        int result = Calculator::evaluate(expression);
        std::cout << "Результат: " << result << '\n';
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << '\n';
        return 1;
    }
    return 0;
}

