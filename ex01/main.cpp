#include <iostream>
#include <string>

#include "PhoneBook.hpp"

Contact addContact() {
	Contact contact;
	std::string tmp;

	std::cout << "Enter first name:" << std::endl;
	// TODO getline
	std::cin >> tmp;
	contact.setFirstName(tmp);

	std::cout << "Enter last name:" << std::endl;
	// TODO getline
	std::cin >> tmp;
	contact.setLastName(tmp);

	std::cout << "Enter nick name:" << std::endl;
	// TODO getline
	std::cin >> tmp;
	contact.setNickName(tmp);

	std::cout << "Enter phone number:" << std::endl;
	// TODO getline
	std::cin >> tmp;
	contact.setPhoneNumber(tmp);

	std::cout << "Enter the darkest secret:" << std::endl;
	// TODO getline
	std::cin >> tmp;
	contact.setSecret(tmp);
	return contact;
}

void findAndPrintContact(PhoneBook& book) {
	int index;

	std::cout << "Enter the index of the contact:" << std::endl;
	std::cin >> index;
	if (index >= 0 && index <= 7) {
		Contact c = book.find(index);
		if (c.isInitialized()) {
			// TODO out stream manipulations!!!
			std::cout
				<< "|" << c.getFirstName()
				<< "|" << c.getLastName()
				<< "|" << c.getNickName()
				<< "|" << c.getPhoneNumber()
				<< "|" << c.getSecret()
				<< std::endl;
		} else {
			std::cout << "Empty!" << std::endl;
		}
	} else {
		std::cout << "Invalid index: " << index << std::endl;
	}
}

int main() {
	PhoneBook book;

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::string command;
	do {
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		getline(std::cin, command);
		if (command.compare("ADD") == 0) {
			book.add(addContact());
		} else if (command.compare("SEARCH") == 0) {
			findAndPrintContact(book);
		} else if (command.compare("EXIT") != 0) {
			std::cout << "Command \"" << command << "\" does not match any!" << std::endl;
			if (command.empty()) std::cout << "(Hint: type \"EXIT\" to quit the program)" << std::endl;
			std::cout << std::endl;
		}
	} while (command.compare("EXIT") != 0);
}
