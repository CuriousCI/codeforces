#include <iostream>
#include <cstdint>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases, size;
	cin >> cases;

	while (cases--)
	{
		cin >> size;
		vector<uint32_t> sequence(size);
		for (auto &number : sequence)
			cin >> number;

		for (uint32_t left = 0, right = size - 1; left < right; left++, right--)
			cout << sequence[left] << ' ' << sequence[right] << ' ';

		if ((size & 1) == 1)
			cout << sequence[(size - 1) / 2];

		cout << endl;
	}
}