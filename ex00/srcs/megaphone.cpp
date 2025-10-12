#include "megaphone.hpp"
using namespace std;

int	is_lowercase(char c) {
	return (c >= 'a' && c <= 'z');
}

void	megaphone(const string& str) {
	for (char c : str)
		cout << static_cast<char>(toupper(c));
}

int main (int argc, char **argv) {
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	for (int i = 1; argv[i]; i++)
		megaphone(string(argv[i]));
	cout << endl;
	return 0;
}