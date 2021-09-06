#include <iostream>
#include <deque>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, biggest = 0;
	cin >> size;

	vector<uint16_t> numbers(size);
	for (auto &number : numbers)
	{
		cin >> number;
		biggest = max(biggest, number);
	}

	vector<uint16_t> found(biggest + 1, 0);
	deque<uint16_t> result;
	for (int32_t index = (int32_t)size - 1; index >= 0; index--)
		if (!found[numbers[index]])
		{
			result.push_front(numbers[index]);
			found[numbers[index]] = true;
		}

	cout << result.size() << endl;
	for (auto number : result)
		cout << number << ' ';
}