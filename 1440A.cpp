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
		uint32_t length, zero_cost, one_cost, exchange_cost, cost = 0;
		string binary;
		cin >> length >> zero_cost >> one_cost >> exchange_cost >> binary;

		for (auto digit : binary)
			if (digit == '1')
				cost += (zero_cost + exchange_cost < one_cost ? zero_cost + exchange_cost : one_cost);
			else if (digit == '0')
				cost += (one_cost + exchange_cost < zero_cost ? one_cost + exchange_cost : zero_cost);

		cout << cost << endl;
	}
}