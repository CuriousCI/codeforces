#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t numbers;
	char max_digit;
	cin >> numbers >> max_digit;

	auto total = 0;
	while (numbers--)
	{
		string number;
		cin >> number;

		vector<bool> digits(10, false);
		for (auto digit : number)
			digits[digit - '0'] = true;

		bool is_valid = true;
		for (auto digit = 0; digit <= max_digit - '0' && is_valid; digit++)
			is_valid = digits[digit];

		total += is_valid;
	}

	cout << total;
}