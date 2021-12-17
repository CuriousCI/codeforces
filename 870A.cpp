#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t alpha_size, beta_size;

	cin >> alpha_size >> beta_size;

	vector<uint16_t>
		alpha(alpha_size),
		beta(beta_size);

	for (auto &number : alpha)
		cin >> number;
	for (auto &number : beta)
		cin >> number;

	ranges::sort(alpha);
	ranges::sort(beta);

	for (auto first : alpha)
		for (auto second : beta)
			if (first == second)
			{
				cout << first;
				return 0;
			}

	cout << min(alpha.front(), beta.front()) << max(alpha.front(), beta.front());
}