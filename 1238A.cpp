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

		cout << (origin - destination < 2 ? "NO" : "YES") << endl;
	}
}