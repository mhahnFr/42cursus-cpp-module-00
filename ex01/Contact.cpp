#include "Contact.hpp"

Contact::Contact() {
	this->initialized = false;
}

Contact::~Contact() {}

std::string Contact::getFirstName() {
	return this->firstName;
}

std::string Contact::getLastName() {
	return this->lastName;
}

std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::getSecret() {
	return this->secret;
}

void Contact::setFirstName(std::string firstName) {
	this->initialized = true;
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->initialized = true;
	this->lastName = lastName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->initialized = true;
	this->phoneNumber = phoneNumber;
}

void Contact::setSecret(std::string secret) {
	this->initialized = true;
	this->secret = secret;
}
