#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint16_t> permutation(size);
		for (auto &number : permutation)
			cin >> number;

		bool found = false;
		for (auto index = 1; index < size - 1; index++)
			if (permutation[index - 1] < permutation[index] && permutation[index] > permutation[index + 1])
			{
				found = true;
				cout << "YES" << endl
					 << index << ' ' << index + 1 << ' ' << index + 2;
				break;
			}

		if (!found)
			cout << "NO";
		cout << endl;
	}
}