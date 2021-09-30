#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t people, packs, amount, distressed = 0;
	char symbol;

	cin >> people >> packs;
	while (people--)
	{
		cin >> symbol >> amount;
		switch (symbol)
		{
		case '+':
			packs += amount;
			break;

		case '-':
			if (amount <= packs)
				packs -= amount;
			else
				distressed++;
			break;
		}
	}

	cout << packs << ' ' << distressed;
}