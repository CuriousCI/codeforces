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

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t programs_count, current_ram;
		cin >> programs_count >> current_ram;

		vector<pair<uint64_t, uint64_t>> programs(programs_count);
		for (auto &program : programs)
			cin >> program.first;
		for (auto &program : programs)
			cin >> program.second;

		ranges::sort(programs);

		for (auto program = 0; program < programs_count && current_ram >= programs[program].first; program++)
			current_ram += programs[program].second;

		cout << current_ram << endl;
	}
}