#include <iostream>
#include <vector>
#include <ranges>
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
		uint16_t size;
		cin >> size;

		vector<uint32_t> alpha(size), beta(size);
		for (auto &number : alpha)
			cin >> number;
		for (auto &number : beta)
			cin >> number;

		for (auto index = 0; index < size; index++)
			if (alpha[index] > beta[index])
			{
				auto swap = alpha[index];
				alpha[index] = beta[index];
				beta[index] = swap;
			}

		cout << *ranges::max_element(alpha) * *ranges::max_element(beta) << endl;
	}
}