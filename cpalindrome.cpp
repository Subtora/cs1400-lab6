#include <iostream>
void reverse(char* s);

int main(int argc, char* argv[]) {

	char str[1000] = "";
	char temp[1000] = "";	// empty string
	for (int i = 1; i < argc; i++) {
		strcat_s(str, 1000, argv[i]);
		strcat_s(temp, 1000, argv[i]);
	}
	reverse(temp);

	if (temp[] == str[]) {
			std::cout << "vaild palindrome";
	}
	else { std::cout << "invalid palindrome"; 
	}

	std::cin.get();
	return 0;
}
void reverse(char* s)
{
	for (size_t i = 0; i < strlen(s) / 2; i++)
	{
		char	temp = s[i];
		s[i] = s[strlen(s) - 1 - i];
		s[strlen(s) - 1 - i] = temp;
	}
}
