#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases, length;
	string binary;

	cin >> test_cases;
	while (test_cases--)
	{
		cin >> length >> binary;
		uint64_t zeros_count = 0, ones_count = 0;
		for (auto digit : binary)
			if (digit - '0')
				ones_count++;
			else
				zeros_count++;

		for (auto _ = 0; _ < length; _++)
			cout << (ones_count >= zeros_count ? '1' : '0');

		cout << endl;
	}
}