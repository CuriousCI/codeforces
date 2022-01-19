#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string line;
	uint32_t queries_count;

	cin >> line >> queries_count;

	vector<uint32_t> precalculated(line.length(), 0);
	for (auto index = 1; index < line.length(); index++)
	{
		precalculated[index] += precalculated[index - 1];
		if (line[index - 1] == line[index])
			precalculated[index]++;
	}

	while (queries_count--)
	{
		uint64_t left, right;
		cin >> left >> right;

		cout << precalculated[right - 1] - precalculated[left - 1] << endl;
	}
}