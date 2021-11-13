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

	uint16_t cases;
	uint64_t number, sum;

	cin >> cases;
	while (cases--)
	{
		sum = 0;
		for (auto _ = 0; _ < 3; _++)
		{
			cin >> number;
			sum += number;
		}

		cout << (bool)(sum % 3) << endl;
	}
}