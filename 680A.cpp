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

	vector<uint16_t> cards(5);
	auto total = 0;
	for (auto &card : cards)
	{
		cin >> card;
		total += card;
	}

	map<uint16_t, uint16_t> counts;
	for (auto card : cards)
		counts[card]++;

	auto difference = 0;
	for (auto count : counts)
		if (count.second >= 2)
			difference = max(difference, count.first * min(count.second, (uint16_t)3));

	cout << total - difference;
}