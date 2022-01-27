#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t left, right;
		cin >> left >> right;
		if (left * 2 > right)
			cout << "-1 -1";
		else
			cout << left << ' ' << left * 2;
		cout << endl;
	}
}