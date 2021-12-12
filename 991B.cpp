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

	uint16_t grades_count;
	cin >> grades_count;

	vector<uint16_t> grades(grades_count);
	for (auto &grade : grades)
		cin >> grade;

	ranges::sort(grades);
	uint16_t sum = 0;
	for (auto grade : grades)
		sum += grade;

	uint16_t works_todo = 0;
	size_t index = 0;
	while (round((double)sum / grades_count) < 5 && index < grades_count)
	{
		works_todo++;
		sum += 5 - grades[index];
		index++;
	}

	cout << works_todo;
}