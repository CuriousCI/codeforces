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
		uint64_t ones, twos;
		cin >> ones >> twos;

		cout << (ones ? ones + twos * 2 + 1 : 1) << endl;
	}
}