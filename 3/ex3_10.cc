#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "Enter a string of characters including puctuation." << endl;
	for (string s; getline(cin, s); cout << endl)
		for (auto i : s)
			if (!ispunct(i)) cout << i;

	return 0;
}
