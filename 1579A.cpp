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
		string sequence;
		cin >> sequence;

		uint16_t alpha = 0, beta = 0;
		for (auto item : sequence)
			if (item == 'B')
				beta++;
			else
				alpha++;

		cout << (alpha == beta ? "YES" : "NO") << endl;
	}
}