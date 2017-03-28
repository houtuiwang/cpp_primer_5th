#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string concatenated;
	for (string buffer; cin >> buffer; concatenated += buffer);
	cout << "The concatenated string is " << concatenated << endl;

	return 0;
}
