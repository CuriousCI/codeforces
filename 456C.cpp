#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

vector<int64_t>
	numbers(10e5 + 1, 0),
	results(10e5 + 1, INT64_MIN);

int64_t dynamic(int64_t number)
{
	switch (number)
	{
	case 0:
		return 0;
	case 1:
		return numbers[1];
	default:
		if (results[number] == INT64_MIN)
			results[number] = max({
				dynamic(number - 1),
				dynamic(number - 2) + numbers[number] * number,
			});
		return results[number];
	}
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size, number, biggest = 0;
	cin >> size;

	for (size_t _ = 0; _ < size; _++)
	{
		cin >> number;
		numbers[number]++;
		biggest = max(number, biggest);
	}

	cout << dynamic(biggest + 1);
}