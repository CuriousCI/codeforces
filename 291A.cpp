#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t couples = 0;
	uint16_t size;
	uint64_t id;
	map<uint64_t, uint16_t> ids;

	cin >> size;
	while (size--)
	{
		cin >> id;
		ids[id]++;
		if (ids[id] == 2 && couples != -1 && id)
			couples++;
		else if (ids[id] == 3 && id)
			couples = -1;
	}

	cout << couples;
}