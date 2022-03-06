#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint32_t power_ups_number;
		cin >> power_ups_number;

		set<uint64_t> power_ups;
		uint64_t power_up;
		for (auto _ = 0; _ < power_ups_number; _++)
		{
			cin >> power_up;
			power_ups.insert(power_up);
		}

		for (auto team_size = 1; team_size <= power_ups_number; team_size++)
			cout << max((int)power_ups.size(), team_size) << endl;
	}
}