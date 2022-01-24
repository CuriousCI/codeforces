#include <iostream>
#include <string>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

string to_ternary(uint64_t number)
{
	string result;

	while (number)
	{
		result += '0' + number % 3;
		number /= 3;
	}

	ranges::reverse(result);
	return result;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t factor, result;
	cin >> factor >> result;

	if (!factor && !result)
		cout << 0;
	else
	{

		string
			ternary_factor = to_ternary(factor),
			ternary_result = to_ternary(result);

		while (ternary_factor.length() < ternary_result.length())
			ternary_factor = '0' + ternary_factor;

		while (ternary_result.length() < ternary_factor.length())
			ternary_result = '0' + ternary_result;

		string ternary_operator;
		for (auto digit = 0; digit < ternary_result.length(); digit++)
		{

			char operator_digit;
			if (ternary_result[digit] < ternary_factor[digit])
				operator_digit = '0' + (3 - (ternary_factor[digit] - '0') + (ternary_result[digit] - '0'));
			else
				operator_digit = '0' + ((ternary_result[digit] - '0') - (ternary_factor[digit] - '0'));

			ternary_operator += operator_digit;
		}

		cout << stoi(ternary_operator, 0, 3);
	}
}