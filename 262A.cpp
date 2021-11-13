#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, limit;
	cin >> size >> limit;

	vector<string> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	auto result = 0;
	for (auto number : numbers)
	{
		auto lucky = 0;
		for (auto digit : number)
		{
			if (digit == '4' || digit == '7')
				lucky++;
			if (lucky > limit)
				break;
		}

		if (lucky <= limit)
			result++;
	}
	cout << result;
}