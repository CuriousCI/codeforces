#include <iostream>
#include <set>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

bool is_fair(string number, uint64_t value)
{
	set<uint16_t> divisors;
	for (auto digit : number)
		if (digit - '0')
			divisors.insert(digit - '0');

	for (auto divisor : divisors)
		if (value % divisor)
			return false;

	return true;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t min_number;
		cin >> min_number;

		while (!is_fair(to_string(min_number), min_number))
			min_number++;

		cout << min_number << endl;
	}
}