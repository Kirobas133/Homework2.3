
#include <iostream>

class Counter {
private:
    int counts;

public:
    Counter() {
        counts = 1;
    }
    Counter(int counts) {
        this->counts = counts;
    }    
    void increase() {
        counts = counts++;
    }
    void decrease() {
        counts = counts--;
    }
    int get_counts() {
        return counts;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string startanswer, command;
    int startcounts = 1;
    std::cout << "Вы хотите указать начальное значение счетчика? Введите yes или no:";
    std::cin >> startanswer;
   
    if (startanswer == "yes") {
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> startcounts;
    }
    Counter counts1(startcounts);

    while (1) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        if (command == "+") {
            counts1.increase();
        }
        else if (command == "-") {
            counts1.decrease();
        }
        else if (command == "=") {
            std:: cout << counts1.get_counts() << std::endl;
        }
        else if (command == "x") {
            std::cout << "До свидания!";
            break;
        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
