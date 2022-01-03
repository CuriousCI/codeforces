#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int64_t ceil_division(int64_t alpha, int64_t beta)
{
	return (alpha + beta - 1) / beta;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases;
	cin >> cases;
	while (cases--)
	{
		int64_t
			buyable_sticks,
			coal_cost,
			required_torces;

		cin >> buyable_sticks >> coal_cost >> required_torces;

		int64_t total_trades = ceil_division(required_torces * coal_cost + required_torces - 1, buyable_sticks - 1) + required_torces;
		cout << total_trades << endl;
	}
}