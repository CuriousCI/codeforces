#include <iostream>
#include <ranges>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, size, position, step, highest = 0;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<vector<uint64_t>> states(1, vector<uint64_t>(size));
		for (auto &number : states.front())
			cin >> number;

		cin >> size;
		vector<pair<uint64_t, uint64_t>> queries(size);
		for (auto &query : queries)
		{
			cin >> query.first >> query.second;
			highest = max(highest, query.second);
		}

		for (auto step = 1; step <= min(highest + 1, states.front().size() + 20); step++)
		{
			map<uint64_t, uint64_t> frequencies;
			for (auto number : states[step - 1])
				frequencies[number]++;
			vector<uint64_t> state;
			for (auto number : states[step - 1])
				state.push_back(frequencies[number]);
			states.push_back(state);
		}

		for (auto query : queries)
			cout << states[min(query.second, states.front().size() + 19)][query.first - 1] << endl;
	}
}