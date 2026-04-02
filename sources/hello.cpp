#include <iostream>
#include <string>

// Основная функция
int main()
{
    // Имя пользователя
    std::string name;
    // Запрос имени
    std::cout << "Enter your name: ";
    srd::cin >> name;
    // Вывод приветсвия 
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
