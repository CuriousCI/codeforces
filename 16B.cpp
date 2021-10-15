#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t rucksack, containers;
	cin >> rucksack >> containers;

	vector<pair<uint64_t, uint64_t>> matchboxes(containers);
	for (auto &matchbox : matchboxes)
		cin >> matchbox.second >> matchbox.first;

	sort(matchboxes.begin(), matchboxes.end());
	reverse(matchboxes.begin(), matchboxes.end());

	uint64_t matchbox = 0, total = 0;
	while (rucksack && matchbox < containers)
	{
		auto quantity = min(rucksack, matchboxes[matchbox].second);
		total += quantity * matchboxes[matchbox].first;
		rucksack -= quantity;
		matchbox++;
	}

	cout << total;
}