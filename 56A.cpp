#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t
		clients_count,
		clients_to_check = 0;

	cin >> clients_count;

	set<string> alcohol = {
		"ABSINTH",
		"BEER",
		"BRANDY",
		"CHAMPAGNE",
		"GIN",
		"RUM",
		"SAKE",
		"TEQUILA",
		"VODKA",
		"WHISKEY",
		"WINE",
	};

	while (clients_count--)
	{
		string client;
		cin >> client;

		try
		{
			uint16_t age = stoi(client);
			if (age < 18)
				clients_to_check++;
		}
		catch (std::exception e)
		{
			if (alcohol.contains(client))
				clients_to_check++;
		}
	}

	cout << clients_to_check;
}