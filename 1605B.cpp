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

	uint16_t cases, length;

	cin >> cases;
	while (cases--)
	{
		cin >> length;
		vector<pair<char, uint16_t>> binary(length);
		auto index = 1;
		for (auto &digit : binary)
		{
			cin >> digit.first;
			digit.second = index++;
		}

		ranges::sort(binary);
		for (auto index = 1; index <= length; index++)
		}
}