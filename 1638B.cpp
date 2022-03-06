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

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint32_t length;
		cin >> length;

		vector<uint64_t> numbers(length);
		bool even_sorted = true, odd_sorted = true;
		uint32_t last_even = UINT32_M
	}
}