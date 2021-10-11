#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size;

	cin >> size;
	vector<uint16_t> interesting(size);
	for (auto &minute : interesting)
		cin >> minute;

	if (interesting.front() > 15)
	{
		cout << 15;
		return 0;
	}
	else
		for (auto index = 1; index < size; index++)
			if (interesting[index] - interesting[index - 1] > 15)
			{
				cout << min(interesting[index - 1] + 15, 90);
				return 0;
			}

	cout << min(interesting.back() + 15, 90);
}