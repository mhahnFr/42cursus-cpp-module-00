#pragma once

#include <string>

class Contact {
	public:
		Contact();
		~Contact();

		std::string getFirstName() const;
		void        setFirstName(std::string);

		std::string getLastName() const;
		void        setLastName(std::string);

		std::string getNickName() const;
		void        setNickName(std::string);

		std::string getSecret() const;
		void        setSecret(std::string);

		std::string getPhoneNumber() const;
		void        setPhoneNumber(std::string);

		bool isInitialized() const;

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secret;
		bool initialized;
};
