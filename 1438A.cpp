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
		uint16_t length;
		cin >> length;

		for (auto _ = 0; _ < length; _++)
			cout << 1 << ' ';
		cout << endl;
	}
}