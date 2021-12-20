#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t doctors_count;
	cin >> doctors_count;

	vector<pair<uint64_t, uint64_t>> doctors(doctors_count);
	for (auto &doctor : doctors)
		cin >> doctor.first >> doctor.second;

	uint64_t minimum_time = 0;
	for (auto doctor : doctors)
	{
		if (!minimum_time)
			minimum_time = doctor.first;
		else
		{
			uint64_t multiplier = 0;
			while (doctor.first + multiplier * doctor.second <= minimum_time)
				multiplier++;

			minimum_time = doctor.first + multiplier * doctor.second;
		}
	}

	cout << minimum_time;
}