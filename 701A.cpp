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

	uint16_t cards_size;
	cin >> cards_size;

	vector<pair<uint16_t, uint16_t>> cards(cards_size);
	auto index = 1;
	for (auto &card : cards)
	{
		cin >> card.first;
		card.second = index++;
	}

	ranges::sort(cards);

	for (auto index = 0; index < cards_size / 2; index++)
		cout << cards[index].second << ' ' << cards[cards_size - index - 1].second << endl;
}