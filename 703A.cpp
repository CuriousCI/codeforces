#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rounds, mishka, chris, mishka_wins = 0, chris_wins = 0;
	cin >> rounds;

	while (rounds--)
	{
		cin >> mishka >> chris;
		if (mishka > chris)
			mishka_wins++;
		else if (chris > mishka)
			chris_wins++;
	}

	cout << (mishka_wins > chris_wins ? "Mishka" : mishka_wins < chris_wins ? "Chris"
																			: "Friendship is magic!^^");
}