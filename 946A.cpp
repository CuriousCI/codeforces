#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	int16_t left = 0, right = 0, number;

	cin >> size;
	while (size--)
	{
		cin >> number;
		if (number < 0)
			left += number;
		else
			right += number;
	}

	cout << right - left;
}