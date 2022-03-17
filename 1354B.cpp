#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

vector<int32_t> distances(string sequence, char target)
{
	vector<int32_t> distances(sequence.length(), 0), positions;

	for (auto digit = 0; digit < sequence.length(); digit++)
		if (sequence[digit] == target)
			positions.push_back(digit);

	if (positions.size())
	{
		int32_t position = 0;
		for (int32_t distance = 0; distance < distances.size(); distance++)
		{
			if (distance >= positions[position] && position < positions.size() - 1)
				position++;

			distances[distance] = min(abs(position > 0 ? distance - positions[position - 1] : distance - positions[position]), abs(positions[position] - distance));
		}
	}

	return distances;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string sequence;
		cin >> sequence;

		auto ones = distances(sequence, '1');
		auto twos = distances(sequence, '2');
		auto threes = distances(sequence, '3');

		int32_t min_distance = INT32_MAX;
		for (auto position = 0; position < sequence.length(); position++)
			min_distance = min(min_distance, ones[position] + twos[position] + threes[position]);

		cout << (min_distance < 2 ? 0 : min_distance + 1) << endl;
	}
}