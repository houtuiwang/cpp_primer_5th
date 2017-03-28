#include <string>
using std::string; using std::getline;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	string line;

	while (getline(cin, line))
		if (!line.empty())
			cout << line << endl;

	return 0;
}
