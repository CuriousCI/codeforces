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
		uint64_t red, blue, max_difference;
		cin >> red >> blue >> max_difference;
		if (red > blue)
		{
			auto temp = red;
			red = blue;
			blue = temp;
		}

		cout << (blue > red * (max_difference + 1) ? "NO" : "YES") << endl;
	}
}