#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t cases, size, pourings;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> pourings;
		vector<int64_t> barrels(size);
		for (auto &barrel : barrels)
			cin >> barrel;
		sort(barrels.begin(), barrels.end());

		for (int64_t _ = 0; _ < pourings; _++)
		{
			barrels.back() += barrels[max((int64_t)0, size - 2 - _)];
			barrels[max((int64_t)0, size - 2 - _)] = 0;
		}

		cout << barrels.back() << endl;
	}
}