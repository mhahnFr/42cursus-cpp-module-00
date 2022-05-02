#include <iostream>
#include <string>

#include "PhoneBook.hpp"

std::string prompt() {
	std::string ret;
	getline(std::cin, ret);
	if (std::cin.eof()) {
		std::cout << "Please exit using the \"EXIT\" command!" << std::endl
				  << "Exiting..." << std::endl;
		exit(0);
	}
	if (ret.empty()) return prompt();
	return ret;
}

Contact addContact() {
	Contact contact;
	std::string tmp;

	std::cout << "Enter first name:" << std::endl;
	tmp = prompt();
	contact.setFirstName(tmp);

	std::cout << "Enter last name:" << std::endl;
	tmp = prompt();
	contact.setLastName(tmp);

	std::cout << "Enter nick name:" << std::endl;
	tmp = prompt();
	contact.setNickName(tmp);

	std::cout << "Enter phone number:" << std::endl;
	tmp = prompt();
	contact.setPhoneNumber(tmp);

	std::cout << "Enter the darkest secret:" << std::endl;
	tmp = prompt();
	contact.setSecret(tmp);
	return contact;
}

bool isValidInteger(std::string& str) {
	for (size_t i = 0; i < str.size(); i++) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}

void findAndPrintContact(PhoneBook& book) {
	int index;
	std::string line;

	std::cout << "Enter the index of the contact:" << std::endl;
	line = prompt();
	if (isValidInteger(line)) {
		index = atoi(line.c_str());
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
			findAndPrintContact(book);
		}
	} else {
		std::cout << "Not a valid number!" << std::endl;
		findAndPrintContact(book);
	}
}

int main() {
	PhoneBook book;

	std::cout << "Welcome to the PhoneBook!" << std::endl;
	std::string command;
	do {
		std::cout << "Enter a command (ADD, SEARCH, EXIT):" << std::endl;
		command = prompt();
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
