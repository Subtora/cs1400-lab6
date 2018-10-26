#include <iostream>
#include <string>


int main(int argc, char* argv[]) {

	char str[1000] = "";
	char temp[1000] = "";
	
	for (int i = 1; i < argc; i++) {
		strcat_s(str, 1000, argv[i]);
	}
	strcpy_s(temp, str); //copy contents of str to temp
	std::size_t len = std::strlen(str);

	//reverse temp
	for (std::size_t i = 0; i != len / 2; ++i) {
		char temp = str[i];
		str[len - i - 1] = temp;
	}
	//compare and output solution
	if (strcmp(temp, str) == 0) {
			std::cout << "vaild palindrome";
	}
	else { std::cout << "invalid palindrome"; 
	}

	return 0;
}
