#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t segments;

	cin >> cases;
	while (cases--)
	{
		cin >> segments;
		if (segments & 1)
		{
			cout << 7;
			segments -= 2;
		}
		for (auto _ = 0; _ < segments / 2; _++)
			cout << 1;
		cout << endl;
	}
}