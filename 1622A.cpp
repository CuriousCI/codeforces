#include <iostream>
#include <vector>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		vector<uint64_t> sticks(3);
		for (auto &stick : sticks)
			cin >> stick;

		ranges::sort(sticks);
		if ((sticks[2] - sticks[0] == sticks[1]) ||
			(sticks[0] == sticks[1] && sticks[2] % 2 == 0) ||
			(sticks[1] == sticks[2] && sticks[0] % 2 == 0))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}