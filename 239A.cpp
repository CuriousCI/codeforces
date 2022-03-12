#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t second_bag, divisor, max_total;
	cin >> second_bag >> divisor >> max_total;

	uint64_t multiplier = ceil((double)second_bag / (double)divisor);
	if (multiplier * divisor == second_bag)
		multiplier++;
	bool found = false;
	while (multiplier * divisor <= max_total)
	{
		found = true;
		cout << multiplier * divisor - second_bag << ' ';
		multiplier++;
	}

	if (!found)
		cout << -1;
}