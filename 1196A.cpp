#include <iostream>
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
		uint64_t total = 0, pile;
		for (auto _ = 0; _ < 3; _++)
		{
			cin >> pile;
			total += pile;
		}

		cout << total / 2 << endl;
	}
}