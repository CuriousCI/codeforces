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

	uint16_t instruments_numer;
	int32_t days_number;
	cin >> instruments_numer >> days_number;

	auto index = 1;
	vector<pair<uint16_t, uint32_t>> instruments(instruments_numer);
	for (auto &instrument : instruments)
	{
		cin >> instrument.first;
		instrument.second = index;
		index++;
	}

	ranges::sort(instruments);

	vector<uint16_t> learned_instruments;
	for (auto instrument : instruments)
		if (instrument.first <= days_number)
		{
			days_number -= instrument.first;
			learned_instruments.push_back(instrument.second);
		}
		else
			break;

	cout << learned_instruments.size() << endl;
	for (auto learned_instrument : learned_instruments)
		cout << learned_instrument << ' ';
}