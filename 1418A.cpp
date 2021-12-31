#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases;
	cin >> cases;
	while (cases--)
	{
		double
			buyable_sticks,
			coal_cost,
			required_torces;

		cin >> buyable_sticks >> coal_cost >> required_torces;

		int64_t total_cost = ceil(ceil(required_torces / coal_cost) / buyable_sticks);
		total_cost += ceil(required_torces / buyable_sticks);
		cout << total_cost << endl;
	}
}