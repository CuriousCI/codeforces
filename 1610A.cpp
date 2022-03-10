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
		uint64_t height, width;
		cin >> height >> width;

		if (height == width && height == 1)
			cout << 0;
		else if (min(width, height) == 1)
			cout << 1;
		else
			cout << 2;

		cout << endl;
	}
}