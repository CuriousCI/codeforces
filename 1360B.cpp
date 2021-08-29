#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, athletes_number;
	cin >> cases;

	while (cases--)
	{
		cin >> athletes_number;
		vector<uint16_t> athletes(athletes_number);
		for (auto &athlete : athletes)
			cin >> athlete;
		sort(athletes.begin(), athletes.end());
		uint16_t difference = UINT16_MAX;
		for (size_t index = 0; index < athletes_number - 1; index++)
			difference = min((uint16_t)(athletes[index + 1] - athletes[index]), difference);
		cout << difference << endl;
	}
}