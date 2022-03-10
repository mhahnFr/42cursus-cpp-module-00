#include <iostream>
#include <string>

std::string getUpperFromCString(const char* cStr) {
	std::string str (cStr);

	for (unsigned long i = 0; i < str.size(); i++) {
		str[i] = toupper(str[i]);
	}
	return str;
}

int main(const int argc, const char** argv) {
	if (argc == 1) {
		std::cout << " * LOUD AND UNBEARABLE FEEDBACK NOISE * ";
	}
	for (int i = 1; i < argc; i++) {
		std::cout << getUpperFromCString(argv[i]);
	}
	std::cout << std::endl;
}
