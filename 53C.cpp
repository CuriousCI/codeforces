#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t mounds_number;
	cin >> mounds_number;

	uint16_t left = 1, right = mounds_number;
	while (left <= right)
	{
		if (left == right)
			cout << left << ' ';
		else
			cout << left << ' ' << right << ' ';

		left++;
		right--;
	}
}