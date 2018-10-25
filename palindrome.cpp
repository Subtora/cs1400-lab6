#include <iostream>
#include <string>

void cinFullString(std::string &s);
void removeSpaces(std::string &s);

int main() {
	std::string s;
	cinFullString(s);
	removeSpaces(s);

	std::cout << s << std::endl;
	std::cin.get();
	return 0;
}

void cinFullString(std::string &s) {
	getline(std::cin, s);
}
void removeSpaces(std::string &s) {
	for (int i = 0; i < s.length(); i++)
		while (s[i] == ' ')
			s.erase(i, 1);
}