#include <iostream>
#include <deque>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;
	cin >> size;

	deque<uint16_t> cards(size);
	for (auto &card : cards)
		cin >> card;

	uint32_t sereja = 0, dima = 0;
	bool turn = true;

	while (cards.size())
	{
		uint32_t score;

		if (cards.front() > cards.back())
		{
			score = cards.front();
			cards.pop_front();
		}
		else
		{
			score = cards.back();
			cards.pop_back();
		}

		if (turn)
			sereja += score;
		else
			dima += score;

		turn = !turn;
	}

	cout << sereja << ' ' << dima;
}