#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t days, negative = 0, size = 1;
	int16_t day;
	vector<uint16_t> sizes;

	cin >> days;
	while (days--)
	{
		cin >> day;
		if (negative < 2 && day < 0)
			negative++;
		else if (negative == 2 && day < 0)
		{
			sizes.push_back(size - 1);
			negative = 1;
			size = 1;
		}
		if (days == 0)
			sizes.push_back(size);

		size++;
	}

	cout << sizes.size() << endl;
	for (auto size : sizes)
		cout << size << ' ';
}