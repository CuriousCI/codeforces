#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string game;
		cin >> game;

		for (auto turn = 1; turn <= game.length(); turn++)
			if (turn & 1)
				game[turn - 1] = (game[turn - 1] == 'a' ? 'b' : 'a');
			else
				game[turn - 1] = (game[turn - 1] == 'z' ? 'y' : 'z');

		cout << game << endl;
	}
}