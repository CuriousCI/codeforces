#include <iostream>
#include <string>
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
		uint64_t number;
		cin >> number;

		if (number % 7)
			number -= number % 10;

		while (number % 7 != 0)
			number++;

		cout << number << endl;
	}
}