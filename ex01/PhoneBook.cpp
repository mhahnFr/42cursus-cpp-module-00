#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->index = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add(Contact contact) {
	this->contacts[this->index] = contact;
	this->index = this->index == 7 ? 0 : this->index + 1;
}

Contact PhoneBook::find(int index) {
	// TODO
	(void) index;
	return Contact();
}
