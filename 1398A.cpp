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
	uint32_t size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<int32_t> lengths(size);
		for (auto &length : lengths)
			cin >> length;

		bool found = false;
		for (size_t position = 2; position < size; position++)
			if (lengths[position] >= lengths.front() + lengths[1])
			{
				found = true;
				cout << 1 << ' ' << 2 << ' ' << position + 1;
				break;
			}

		if (!found)
			cout << -1;

		cout << endl;
	}
}