#include <iostream>
#include <string>

//Main function
int main()
{
//User name
std::string name;

// Request for name
std::cout << "Enter your name: ";
std::cin >> name;

// Output greeting
std::cout << "Hello world from " << name << std::endl;
return 0;
}
