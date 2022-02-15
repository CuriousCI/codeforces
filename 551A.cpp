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

	uint16_t students_count;
	cin >> students_count;

	vector<pair<uint16_t, uint16_t>> ratings(students_count);
	auto student = 1;

	for (auto &rating : ratings)
	{
		cin >> rating.first;
		rating.second = student;
		student++;
	}

	ranges::sort(ratings);
	ranges::reverse(ratings);
	vector<pair<uint16_t, uint16_t>> new_ratings;
	auto position = 1;
	new_ratings.push_back({ratings.front().second, position});
	for (auto rating = 1; rating < students_count; rating++)
	{
		position++;

		auto new_rating = position;
		if (ratings[rating - 1].first == ratings[rating].first)
			new_rating = new_ratings[rating - 1].second;
		new_ratings.push_back({ratings[rating].second, new_rating});
	}

	ranges::sort(new_ratings);
	for (auto rating : new_ratings)
		cout << rating.second << ' ';
}