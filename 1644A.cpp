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
		string map;
		cin >> map;

		bool completable = true, red_key = false, green_key = false, blue_key = false;
		for (auto item : map)
		{
			if (item == 'r')
				red_key = true;
			if (item == 'g')
				green_key = true;
			if (item == 'b')
				blue_key = true;

			if ((item == 'R' && !red_key) || (item == 'G' && !green_key) || (item == 'B' && !blue_key))
				completable = false;

			if (!completable)
				break;
		}

		cout << (completable ? "YES" : "NO") << endl;
	}
}