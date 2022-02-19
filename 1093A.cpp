#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases, points;
	cin >> test_cases;
	while (test_cases--)
	{
		cin >> points;
		cout << (points - (points % 7)) / 7 + bool(points % 7) << endl;
	}
}