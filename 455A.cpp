#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t size, number;
	cin >> size;

	map<int32_t, int32_t> numbers, gains;
	for (size_t _ = 0; _ < size; _++)
	{
		cin >> number;
		numbers[number]++;
	}

	for (auto number : numbers)
	{
		gains[number.first] = number.second * number.first;
		if (gains.find(number.first - 1) != gains.end())
			gains[number.first] -= numbers[number.first - 1] * (number.first - 1);
		if (gains.find(number.first + 1) != gains.end())
			gains[number.first] -= numbers[number.first + 1] * (number.first + 1);
	}

	vector<pair<int32_t, int32_t>> sorted_numbers;
	for (auto number : gains)
		sorted_numbers.push_back({number.second, number.first});
	sort(sorted_numbers.begin(), sorted_numbers.end());

	cout << sorted_numbers.back().second * numbers[sorted_numbers.back().second];
}