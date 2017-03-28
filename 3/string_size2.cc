#include <cstddef>
using std::size_t;

#include <string>
using std::string; using std::getline;

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
	string line;

	while (getline(cin, line))
		if (line.size() > 80)
			cout << line << endl;

	return 0;
}
