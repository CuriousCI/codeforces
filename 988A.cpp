#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t students_count, team_size;
	cin >> students_count >> team_size;

	set<uint16_t> distinct_ratings;
	while (students_count--)
	{
		uint16_t rating;
		cin >> rating;
		distinct_ratings.insert(rating);
	}

	if (distinct_ratings.size() < team_size)
		cout << "NO";
	else
	{
		cout << "YES\n";
		auto members = 0;
		for (auto rating : distinct_ratings)
		{
			cout << rating << ' ';
			members++;
			if (members == team_size)
				break;
		}
	}
}