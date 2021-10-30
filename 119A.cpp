#include <iostream>
#include <numeric>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t simon, antisimon, stones, play;
	cin >> simon >> antisimon >> stones;

	bool game_over = false, turn = true;
	while (true)
	{
		if (turn)
			play = gcd(simon, stones);
		else
			play = gcd(antisimon, stones);

		stones -= play;
		if (stones < 0)
		{
			if (turn)
				cout << '1';
			else
				cout << '0';
			break;
		}

		turn = !turn;
	}
}