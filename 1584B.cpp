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
		cout << min({height / 2 * width, width / 2 * height}) << endl;
	}
}