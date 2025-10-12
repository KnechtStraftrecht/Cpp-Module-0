#include "megaphone.hpp"
using namespace std;

int	is_lowercase(char c) {
	return (c >= 'a' && c <= 'z')
}

void	megaphone(char *str) {
	for (int i = 0; str[i], i++) {
		if (is_lowercase)
			cout << str[i] - 32;
		else
			cout << str[i];
	}
	cout << endl;
}

int main (int argc, char **argv) {
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	for (int i = 0; argv[i]; i++)
		megaphone(argv[i]);
	return 0;
}