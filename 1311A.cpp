#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t origin, destination;
	cin >> cases;

	while (cases--)
	{
		cin >> origin >> destination;

		if (origin == destination)
			cout << 0;
		else if (origin < destination)
			cout << ((origin & 1) == (destination & 1) ? 2 : 1);
		else
			cout << ((origin & 1) == (destination & 1) ? 1 : 2);

		cout << endl;
	}
}