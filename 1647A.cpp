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
		uint16_t total, type;
		cin >> total;

		if (total % 3 == 1)
			type = 1;
		else
			type = 2;

		uint16_t password_total = 0;
		while (password_total != total)
		{
			cout << type;
			password_total += type;
			type = 3 - type;
		}

		cout << endl;
	}
}