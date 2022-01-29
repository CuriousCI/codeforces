#include <iostream>
#include <cstdint>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint64_t digits_count;
		cin >> digits_count;

		for (auto _ = 0; _ < digits_count - ceil((double)digits_count / 4.0); _++)
			cout << 9;
		for (auto _ = 0; _ < ceil((double)digits_count / 4.0); _++)
			cout << 8;
		cout << endl;
	}
}