#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t position, jumps;

	cin >> cases;
	while (cases--)
	{
		cin >> position >> jumps;
		auto modulo = jumps % 4;
		if (jumps == 0)
			cout << position;
		else if (position & 1)
		{
			if (modulo == 2)
				cout << (position - 1);
			else if (modulo == 3)
				cout << (position - 1) - jumps;
			else if (modulo == 0)
				cout << (position - 1) - (jumps - 1) + jumps;
			else if (modulo == 1)
				cout << (position - 1) - (jumps - 2) + (jumps - 1) + jumps;
		}
		else
		{
			if (modulo == 0)
				cout << position;
			else if (modulo == 1)
				cout << position - jumps;
			else if (modulo == 2)
				cout << position - (jumps - 1) + jumps;
			else if (modulo == 3)
				cout << position - (jumps - 2) + (jumps - 1) + jumps;
		}
		cout << endl;
	}
}