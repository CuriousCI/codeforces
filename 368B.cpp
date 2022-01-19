#include <iostream>
#include <ranges>
#include <map>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size, queries_count;
	cin >> size >> queries_count;

	vector<uint32_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	vector<uint32_t> distinct(size);
	set<uint32_t> distinct_numbers;

	for (int32_t index = size - 1; index >= 0; index--)
	{
		distinct_numbers.insert(numbers[index]);
		distinct[index] = distinct_numbers.size();
	}

	while (queries_count--)
	{
		uint32_t query;
		cin >> query;
		cout << distinct[query - 1] << endl;
	}
}