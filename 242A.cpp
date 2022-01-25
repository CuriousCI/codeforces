#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		vasya_tosses,
		petya_tosses,
		vasya_heads,
		petya_heads;

	cin >> vasya_tosses >> petya_tosses >> vasya_heads >> petya_heads;

	vector<pair<uint16_t, uint16_t>> outcomes;
	for (auto vasya_score = vasya_heads; vasya_score <= vasya_tosses; vasya_score++)
		for (auto petya_score = petya_heads; petya_score <= petya_tosses; petya_score++)
			if (vasya_score > petya_score)
				outcomes.push_back({vasya_score, petya_score});

	cout << outcomes.size() << endl;
	for (auto outcome : outcomes)
		cout << outcome.first << ' ' << outcome.second << endl;
}