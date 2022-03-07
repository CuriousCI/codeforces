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
		uint64_t length, sum;
		cin >> length >> sum;

		auto slots = (sum - (sum % (length * length))) / (length * length);

		if (slots + (length + 1))
	}
}