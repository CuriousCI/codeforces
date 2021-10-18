#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rooms, seals;

	cin >> rooms;
	while (rooms--)
	{
		int16_t left, right;

		cin >> seals;
		while (seals > 0)
		{
			cin >> left >> right;
			cout << -right << ' ' << left << ' ';
			seals -= 2;
		}

		cout << endl;
	}
}