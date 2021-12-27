#include <iostream>
#include <ranges>
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
		uint64_t
			songs_count,
			index = 0;
		cin >> songs_count;

		vector<pair<uint64_t, pair<uint64_t, uint64_t>>>
			predicted_ratings(songs_count);
		for (auto &rating : predicted_ratings)
		{
			cin >> rating.second.first;
			rating.second.second = index;
			index++;
		}

		string likes;
		cin >> likes;
		for (auto index = 0; index < songs_count; index++)
			predicted_ratings[index].first = likes[index] - '0';

		ranges::sort(predicted_ratings);
		ranges::reverse(predicted_ratings);

		for (auto index = 0; index < songs_count; index++)
			predicted_ratings[index].second.first = songs_count - index;

		vector<uint64_t> new_ratings(songs_count);

		for (auto rating : predicted_ratings)
			new_ratings[rating.second.second] = rating.second.first;

		for (auto rating : new_ratings)
			cout << rating << ' ';
		cout << endl;
	}
}