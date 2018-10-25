#include <iostream>

int main(int argc, char* argv[]) {

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