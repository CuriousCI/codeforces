#include <iostream>
#include <set>
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
		uint64_t digits_count;
		string number;
		cin >> digits_count >> number;

		bool found_digit = false;
		char digit_value;

		for (auto digit : number)
			if (digit == '1' || digit == '4' || digit == '6' || digit == '8' || digit == '9')
			{
				digit_value = digit;
				found_digit = true;
				break;
			}

		if (found_digit)
			cout << 1 << endl
				 << digit_value;
		else
		{
			set<string> primes = {"23", "37", "53", "73"};
			bool found = false;
			string new_number;
			for (auto alpha = 0; alpha < number.length() && !found; alpha++)
				for (auto beta = alpha + 1; beta < number.length(); beta++)
				{
					new_number = "";
					new_number += number[alpha];
					new_number += number[beta];

					if (!primes.contains(new_number))
					{
						found = true;
						break;
					}
				}

			cout << new_number.length() << endl
				 << new_number;
		}
		cout << endl;
	}
}