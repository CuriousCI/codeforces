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

	uint16_t fives = 0, zeros = 0;
	for (auto digit : digits)
		if (digit == '0')
			zeros++;
		else
			fives++;

	if (fives < 9 || !zeros)
	{
		if (zeros)
			cout << 0;
		else
			cout << -1;
	}
	else
	{
		for (auto _ = 0; _ < (fives - (fives % 9)) / 9; _++)
			cout << "555555555";
		for (auto _ = 0; _ < zeros; _++)
			cout << "0";
	}
}