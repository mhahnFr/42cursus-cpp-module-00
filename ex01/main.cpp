#include <iostream>
#include <string>

#include "PhoneBook.hpp"

int main() {
	PhoneBook book;

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::string command;
	do {
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> command;
	} while (command.compare("EXIT") != 0);
}
