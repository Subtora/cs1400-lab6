#include <iostream>
#include <string>


void cinFullString(std::string &s);
std::string removeSpaces(std::string s);
std::string reverse(std::string s);
bool isPalindrome(std::string a);

#if 0
int main() {
	std::string s;
	cinFullString(s);

	if (isPalindrome(s)) {
		std::cout << "valid palindrome\n";
	}
	else std::cout << "invalid palindrome\n";

	return 0;
}
#endif 
void cinFullString(std::string &s) {
	getline(std::cin, s);
}

std::string removeSpaces(std::string s) {
	for (int i = 0; i < s.length(); i++)
		while (s[i] == ' ')
			s.erase(i, 1);
	return s;
}

std::string reverse(std::string s)
{
	std::string r = "";

	for (int i = 0; i < s.length(); i++)
		r += s[s.length() - 1 - i];

	return r;
}

bool isPalindrome(std::string a) {
	a = removeSpaces(a);
	return reverse(a) == a;
}