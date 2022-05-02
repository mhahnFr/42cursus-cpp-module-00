#include "Contact.hpp"

Contact::Contact(): initialized(false) {
}

Contact::~Contact() {}

std::string Contact::getFirstName() const {
	return this->firstName;
}

std::string Contact::getLastName() const {
	return this->lastName;
}

std::string Contact::getNickName() const {
	return this->nickName;
}

std::string Contact::getPhoneNumber() const {
	return this->phoneNumber;
}

std::string Contact::getSecret() const {
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

void Contact::setNickName(std::string nickName) {
	this->initialized = true;
	this->nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->initialized = true;
	this->phoneNumber = phoneNumber;
}

void Contact::setSecret(std::string secret) {
	this->initialized = true;
	this->secret = secret;
}

bool Contact::isInitialized() const {
	return this->initialized;
}
