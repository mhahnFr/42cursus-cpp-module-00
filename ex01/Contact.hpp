#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	public:
		Contact();
		~Contact();

		std::string getFirstName();
		void        setFirstName(std::string);

		std::string getLastName();
		void        setLastName(std::string);

		std::string getSecret();
		void        setSecret(std::string);

		std::string getPhoneNumber();
		void        setPhoneNumber(std::string);

	private:
		std::string firstName;
		std::string lastName;
		std::string phoneNumber;
		std::string secret;
		bool initialized;
};

#endif
