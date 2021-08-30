#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t disks;
	cin >> disks;

	string state, combination;
	cin >> state >> combination;

	uint32_t moves = 0;

	for (size_t disk = 0; disk < disks; disk++)
	{
		if (combination[disk] > state[disk])
			swap(combination[disk], state[disk]);

		moves += min(abs(state[disk] - combination[disk]), abs((10 - state[disk]) + combination[disk]));
	}

	cout << moves;
}