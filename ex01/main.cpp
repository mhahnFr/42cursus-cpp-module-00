#include <iostream>
#include <string>

#include "PhoneBook.hpp"

Contact addContact() {
	Contact contact;
	std::string tmp;

	std::cout << "Enter first name:" << std::endl;
	std::cin >> tmp;
	contact.setFirstName(tmp);

	std::cout << "Enter last name:" << std::endl;
	std::cin >> tmp;
	contact.setLastName(tmp);

	std::cout << "Enter nick name:" << std::endl;
	std::cin >> tmp;
	contact.setNickName(tmp);

	std::cout << "Enter phone number:" << std::endl;
	std::cin >> tmp;
	contact.setPhoneNumber(tmp);

	std::cout << "Enter the darkest secret:" << std::endl;
	std::cin >> tmp;
	contact.setSecret(tmp);
	return contact;
}

void findContact() {}

int main() {
	PhoneBook book;

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::string command;
	do {
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> command;
		if (command.compare("ADD") == 0) {
			book.add(addContact());
		} else if (command.compare("SEARCH") == 0) {
			findContact();
		} else if (command.compare("EXIT") != 0) {
			std::cout << "Command \"" << command << "\" does not match any!" << std::endl;
		}
	} while (command.compare("EXIT") != 0);
}
