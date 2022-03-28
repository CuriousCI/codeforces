#include <iostream>
#include <cmath>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t boys_number, girls_number;
	cin >> boys_number;

	vector<int16_t> boys_skill(boys_number);
	for (auto &skill : boys_skill)
		cin >> skill;

	ranges::sort(boys_skill);

	cin >> girls_number;

	vector<int16_t> girls_skill(girls_number);
	for (auto &skill : girls_skill)
		cin >> skill;

	ranges::sort(girls_skill);

	int16_t result = 0;
	for (auto boy = 0; boy < boys_number; boy++)
		for (auto girl = 0; girl < girls_number; girl++)
			if (abs(boys_skill[boy] - girls_skill[girl]) <= 1)
			{
				girls_skill[girl] = 1000;
				result++;
				break;
			}

	cout << result;
}