#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t digits_number;
	cin >> digits_number;

	vector<char> digits(digits_number);
	for (auto &digit : digits)
		cin >> digit;

	string result;
	for (auto digit : digits)
		if (digit == '0')
			result.push_back(digit);

	cout << result;
}