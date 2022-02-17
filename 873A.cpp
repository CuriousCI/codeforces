#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t chores_count, fast_chores_count, fast_time;
	cin >> chores_count >> fast_chores_count >> fast_time;

	vector<uint16_t> chores_times(chores_count);
	for (auto &chore_time : chores_times)
		cin >> chore_time;

	for (auto _ = chores_count - 1; _ >= 0 && fast_chores_count > 0; _--)
		if (chores_times[_] > fast_time)
		{
			chores_times[_] = fast_time;
			fast_chores_count--;
		}

	auto total = 0;
	for (auto chore_time : chores_times)
		total += chore_time;
	cout << total;
}