#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cups = 0, medals = 0, cup, medal, shelves;

	for (auto _ = 0; _ < 3; _++)
	{
		cin >> cup;
		cups += cup;
	}

	for (auto _ = 0; _ < 3; _++)
	{
		cin >> medal;
		medals += medal;
	}

	cin >> shelves;

	cout << (ceil(cups / 5.0) + ceil(medals / 10.0) <= shelves ? "YES" : "NO");
}