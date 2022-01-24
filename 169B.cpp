#include <iostream>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number, digits;
	cin >> number >> digits;

	ranges::sort(digits);
	ranges::reverse(digits);

	for (auto digit : digits)
	{
		bool replaced = false;
		for (auto index = 0; index < number.length() && !replaced; index++)
			if (number[index] < digit)
			{
				number[index] = digit;
				replaced = true;
			}

		if (!replaced)
			break;
	}

	cout << number;
}