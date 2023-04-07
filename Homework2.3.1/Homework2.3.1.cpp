
#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

 
public:

    Calculator(double num1, double num2) {
        if (num1 != 0 && num2 != 0) {
            this->num1 = num1;
            this->num2 = num2;
        }
        else {
            this->num1 = 1;
            this->num2 = 1;
            std::cout << "Неверный ввод! num1 и num2 установлены значениями по умолчанию(1).";
        }
    }

    double add() {
        return (num1 + num2);
    }
    double multiply() {
        return (num1 * num2);
    }
    double substract_1_2() {
        return (num1 - num2);
    }
    double substract_2_1() {
        return (num2 - num1);
    }
    double divide_1_2() {
        return (num1 / num2);
    }
    double divide_2_1() {
        return (num2 / num1);
    }
    bool set_num1(double num1) {
        if (num1 != 0) {
            this->num1 = num1;
            return 1;
        }
        else {
            return 0;
        }
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return 1;
        }
        else {
            return 0;
        }
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    bool check1, check2;

    Calculator Calc(1, 1);
    
    while (1) {
        std::cout << "Введите num1: ";
        std::cin >> num1;
        std::cout << "Введите num2: ";
        std::cin >> num2;
        check1 = Calc.set_num1(num1);
        check2 = Calc.set_num2(num2);
        if (check1 == 0 || check2 == 0) {
            std::cout << "Неверный ввод!\n";
            continue;
        }
        else {
            std::cout << "num1 + num2 = " << Calc.add() << std::endl;
            std::cout << "num1 - num2 = " << Calc.substract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << Calc.substract_2_1() << std::endl;
            std::cout << "num1 * num2 = " << Calc.multiply() << std::endl;
            std::cout << "num1 / num2 = " << Calc.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << Calc.divide_2_1() << std::endl;
        }
    }
}
