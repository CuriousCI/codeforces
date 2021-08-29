#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t cases, polycarp;
	vector<int32_t> money(3);

	cin >> cases;
	while (cases--)
	{
		for (auto &owned : money)
			cin >> owned;
		cin >> polycarp;
		sort(money.begin(), money.end());
		int32_t diff = (money[2] - money[0]) + (money[2] - money[1]);
		cout << (polycarp - diff >= 0 && ((polycarp - diff) % 3 == 0) ? "YES" : "NO") << endl;
	}
}