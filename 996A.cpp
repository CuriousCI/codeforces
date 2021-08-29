#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t types[] = {100, 20, 10, 5, 1};

	uint64_t money, bills = 0;
	cin >> money;

	for (auto type = types; type < types + 5; type++)
		if (money >= *type)
		{
			bills += (money - (money % *type)) / *type;
			money -= (money - (money % *type));
		}

	cout << bills;
}