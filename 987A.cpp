#include <iostream>
#include <set>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	map<string, string> colors = {
		{"purple", "Power"},
		{"green", "Time"},
		{"blue", "Space"},
		{"orange", "Soul"},
		{"red", "Reality"},
		{"yellow", "Mind"},
	};

	set<string> gems = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};

	uint16_t owned;
	string gem;

	cin >> owned;
	while (owned--)
	{
		cin >> gem;
		gems.erase(colors[gem]);
	}

	cout << gems.size() << endl;
	for (auto gem : gems)
		cout << gem << endl;
}