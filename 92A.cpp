#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t walruses, chips, sum, walrus = 1;
	cin >> walruses >> chips;

	while (walrus <= chips)
	{
		chips -= walrus;
		walrus = (walrus + 1) % (walruses + 1);
		if (!walrus)
			walrus++;
	}

	cout << chips;
}