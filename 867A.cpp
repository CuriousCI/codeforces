#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t days, siattle_francisco = 0, francisco_siattle = 0;
	string cities;

	cin >> days >> cities;
	for (auto city = 1; city < days; city++)
		if (cities[city] != cities[city - 1])
		{
			if (cities[city] == 'F')
				siattle_francisco++;
			else
				francisco_siattle++;
		}

	cout << (siattle_francisco > francisco_siattle ? "YES" : "NO");
}