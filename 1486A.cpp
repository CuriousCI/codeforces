#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, count;
	cin >> cases;
	while (cases--)
	{
		cin >> count;

		vector<uint64_t> numbers(count);
		for (auto &number : numbers)
			cin >> number;

		bool stackable = true;
		uint64_t total = 0;
		for (auto index = 0; index < count && stackable; index++)
		{
			total += numbers[index];
			stackable = total >= (index * (index + 1)) / 2;
		}

		cout << (stackable ? "YES" : "NO") << endl;
	}
}