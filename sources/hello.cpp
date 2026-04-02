#include <iostream>
#include <string>

// Главная функция
int main()
{
    // Имя пользователя
    std::string name;
    // Запрос имени
    std::cout << "Enter your name: ";
    std::cin >> name;
    //Вывод приветствия
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
