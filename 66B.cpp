#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t sections_count;
	cin >> sections_count;

	vector<uint16_t> sections(sections_count);
	for (auto &section : sections)
		cin >> section;

	uint16_t maximal_watering = 0;

	for (auto section = 0; section < sections_count; section++)
	{
		uint16_t
			left = section,
			right = section;

		while (left > 0 && sections[left - 1] <= sections[left])
			left--;

		while (right < sections_count - 1 && sections[right + 1] <= sections[right])
			right++;

		maximal_watering = max(maximal_watering, (uint16_t)(right - left));
	}

	cout << maximal_watering + 1;
}