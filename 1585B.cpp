#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t size, biggest_number, switches = 0;
		cin >> size;
		vector<uint64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		biggest_number = numbers.back();

		for (int64_t index = size - 1; index >= 0; index--)
			if (numbers[index] > biggest_number)
			{
				switches++;
				biggest_number = numbers[index];
			}

		cout << switches << endl;
	}
}