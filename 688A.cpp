#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t opponents, days, streak = 0, temp = 0;
	string opponent;
	cin >> opponents >> days;

	while (days--)
	{
		cin >> opponent;
		if (opponent.find('0') != string::npos)
			temp++;
		else
			temp = 0;

		streak = max(streak, temp);
	}

	cout << streak;
}