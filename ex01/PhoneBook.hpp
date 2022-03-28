#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void add(Contact);
		Contact find(int);

	private:
		Contact contacts[8];
		int index;
};

#endif
