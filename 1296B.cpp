#include <iostream>
#include <cmath>
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
		uint64_t burles, total_spent = 0, round;
		cin >> burles;
		while (burles)
		{
			double spent = 1;
			while (spent * 10 <= burles)
				spent *= 10;

			total_spent += spent;
			burles -= spent - spent / 10;
		}

		cout << total_spent << endl;
	}
}