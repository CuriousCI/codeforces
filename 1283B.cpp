#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t candies, kids;
		cin >> candies >> kids;

		auto rest = candies % kids;
		cout << (candies - rest) + min(rest, kids / 2) << endl;
	}
}