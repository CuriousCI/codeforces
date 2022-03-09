#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t left, right, divisor;
		cin >> left >> right >> divisor;

		auto number = right;
		while (number % divisor < divisor - 1)
			number--;

		cout << floor((double)number / divisor) + number % divisor << endl;
	}
}