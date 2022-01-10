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
		uint64_t origin, destination;
		cin >> origin >> destination;

		if ((origin == 1 && destination == 1) ||
			(origin > 1 && origin <= 3 && destination < 4) || origin > 3)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}