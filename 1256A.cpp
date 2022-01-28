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
		uint64_t coins, ones, value, total;
		cin >> coins >> ones >> value >> total;

		auto required_coins = min((uint64_t)floor((double)total / (double)value), coins);
		cout << (required_coins <= coins && (total - required_coins * value) <= ones ? "YES" : "NO") << endl;
	}
}