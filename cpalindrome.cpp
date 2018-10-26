#include <iostream>
#include <string.h>
int main(int argc, char* argv[]) {

	char str[1000] = "";
	char temp[1000] = "";	// empty string
	for (int i = 1; i < argc; i++) {
		strcat_s(str, 1000, argv[i]);
		strcat_s(temp, 1000, argv[i]);
	}
	
	std::size_t len = std::strlen(str);
	for (std::size_t i = 0; i != len / 2; ++i) {
		char temp = str[i];
		str[len - i - 1] = temp;
	}

	if (strcmp(temp, str) == 0) {
			std::cout << "vaild palindrome";
	}
	else { std::cout << "invalid palindrome"; 
	}

	//std::cin.get();
	return 0;
}
