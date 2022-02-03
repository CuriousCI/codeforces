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
		uint64_t left, right, moves;
		cin >> left >> right >> moves;

		if (left == right)
			cout << (left == 1 ? "NO" : "YES");
		else
		{
			auto odd = (right - left + 1) - (right / 2 - (left - 1) / 2);
			cout << (odd <= moves ? "YES" : "NO");
		}

		cout << endl;
	}
}