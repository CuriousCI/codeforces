#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t size;
	cin >> size;

	vector<uint32_t> sushi(size), sequences;
	for (auto &fish : sushi)
		cin >> fish;

	auto sequence = 0;
	auto type = sushi.front();
	for (auto fish : sushi)
		if (fish == type)
			sequence++;
		else
		{
			sequences.push_back(sequence);
			sequence = 1;
			type = fish;
		}

	sequences.push_back(sequence);

	uint32_t longest = 0;
	for (auto sequence = 0; sequence < sequences.size() - 1; sequence++)
	{
		uint32_t shortest = min(sequences[sequence], sequences[sequence + 1]);
		longest = max(shortest * 2, longest);
	}

	cout << longest;
}