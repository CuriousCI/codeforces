#include <iostream>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t people_number;
	cin >> people_number;

	vector<uint64_t> queue(people_number);
	for (auto &person : queue)
		cin >> person;

	ranges::sort(queue);

	uint64_t satisfied = 0, total_time = 0;
	for (auto person : queue)
		if (total_time <= person)
		{
			satisfied++;
			total_time += person;
		}

	cout << satisfied;
}