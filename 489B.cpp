#include <iostream>
#include <map>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, skill;

	map<uint16_t, uint32_t> boys, girls;
	cin >> size;
	while (size--)
	{
		cin >> skill;
		boys[skill]++;
	}

	cin >> size;
	while (size--)
	{
		cin >> skill;
		girls[skill]++;
	}

	uint32_t total = 0;

	for (auto boy : boys)
	{
		uint32_t pairs = min(girls[boy.first], boy.second);
		boy.second -= pairs;
		girls[boy.first] -= pairs;
		total += pairs;
	}

	for (auto girl : girls)
	{
		uint32_t pairs = min(boys[girl.first], girl.second);
		girl.second -= pairs;
		boys[girl.first] -= pairs;
		total += pairs;
	}

	cout << total;
}