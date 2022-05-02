#pragma once

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		void add(Contact);
		Contact find(int) const;

	private:
		Contact contacts[8];
		int index;
};
