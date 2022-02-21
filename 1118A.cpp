#include <iostream>
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
		uint64_t liters;
		uint16_t one_liter_cost, two_liters_cost;

		cin >> liters >> one_liter_cost >> two_liters_cost;

		if (two_liters_cost >= one_liter_cost * 2)
			cout << one_liter_cost * liters;
		else
			cout << (liters - (liters & 1)) / 2 * two_liters_cost + ((liters & 1) * one_liter_cost);

		cout << endl;
	}
}