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

	vector<pair<uint16_t, uint16_t>> students(students_count);
	auto id = 1;
	for (auto &student : students)
	{
		student.first = 0;
		student.second = id;
		id++;

		for (auto _ = 0; _ < 4; _++)
		{
			uint16_t grade;
			cin >> grade;
			student.first += grade;
		}
	}

	ranges::sort(students, [](auto alpha, auto beta)
				 { return (alpha.first != beta.first ? alpha.first > beta.first : alpha.second < beta.second); });

	auto rank = 1;
	for (auto student : students)
		if (student.second == 1)
			break;
		else
			rank++;

	cout << rank;
}