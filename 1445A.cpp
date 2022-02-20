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
		uint16_t size, threshold;
		cin >> size >> threshold;

		vector<uint16_t> alpha(size), beta(size);
		for (auto &number : alpha)
			cin >> number;
		for (auto &number : beta)
			cin >> number;

		ranges::reverse(beta);

		bool is_valid = true;
		for (auto index = 0; index < size && is_valid; index++)
			is_valid = alpha[index] + beta[index] <= threshold;

		cout << (is_valid ? "YES" : "NO") << endl;
	}
}