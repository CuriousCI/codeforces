#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		int64_t alpha, x, beta, y, operations, result = INT64_MAX;
		cin >> alpha >> beta >> x >> y >> operations;

		{
			auto reduction = min(alpha - x, operations);
			auto rest = min(beta - y, operations - reduction);

			result = min(result, (alpha - reduction) * (beta - rest));
		}

		{
			auto reduction = min(beta - y, operations);
			auto rest = min(alpha - x, operations - reduction);

			result = min(result, (beta - reduction) * (alpha - rest));
		}

		cout << result << endl;
	}
}