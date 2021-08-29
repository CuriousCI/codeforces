#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t number, position;
	cin >> number >> position;

	cout << fixed;
	if (number & 1)
	{
		if (position <= ceil((double)number / 2))
			cout << position * 2 - 1;
		else
			cout << (uint64_t)(position - ceil((double)number / 2)) * 2;
	}
	else
	{
		if (position <= number / 2)
			cout << position * 2 - 1;
		else
			cout << (uint64_t)(position - number / 2) * 2;
	}
}