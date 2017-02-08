#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem, valItem;
	int cnt = 1;

	if (std::cin >> currItem) {
		while (std::cin >> valItem)
		{
			if (valItem.isbn() == currItem.isbn()) {
				++cnt;
			} else {
				std::cout << currItem << " coours " << cnt << " times " << std::endl;
				currItem = valItem;
				cnt = 1;
			}
		}
		std::cout << currItem << " occurs " << cnt << " times " << std::endl;
	}
	return 0;
}
