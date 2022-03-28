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

		std::string getNickName();
		void        setNickName(std::string);

		std::string getSecret();
		void        setSecret(std::string);

		std::string getPhoneNumber();
		void        setPhoneNumber(std::string);

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secret;
		bool initialized;
};

#endif
