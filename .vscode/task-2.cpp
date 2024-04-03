#include <iostream>

int main() {
    char operation;
    double num1, num2, result;

    std::cout << "Welcome to the Basic Calculator!\n";
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    switch(operation) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
            } else {
                std::cout << "Error! Division by zero is not allowed.\n";
            }
            break;
        default:
            std::cout << "Invalid operation! Please choose from +, -, *, /\n";
    }

    return 0;
}