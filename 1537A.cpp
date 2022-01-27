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
		uint16_t size;
		cin >> size;

		int64_t number, total = 0;

		for (auto _ = 0; _ < size; _++)
		{
			cin >> number;
			total += number;
		}

		cout << (total >= (int64_t)(size) ? total - (int64_t)(size) : 1) << endl;
	}
}