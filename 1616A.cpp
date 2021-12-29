#include <iostream>
#include <vector>
#include <map>
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

		uint64_t size;
		cin >> size;

		vector<int64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		map<int64_t, int64_t> frequency;
		for (auto number : numbers)
			frequency[(number < 0 ? (number * -1) : number)]++;

		int64_t distinct_numbers = 0;
		for (auto item : frequency)
			if (!item.first)
				distinct_numbers++;
			else
				distinct_numbers += (item.second > 1 ? 2 : item.second);

		cout << distinct_numbers << endl;
	}
}
