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
		vector<uint16_t> integers(size);
		for (auto &integer : integers)
			cin >> integer;

		vector<uint16_t> mapping(101);
		for (auto integer : integers)
			mapping[integer]++;

		while (size)
		{
			for (size_t index = 0; index < mapping.size(); index++)
				if (mapping[index])
				{
					cout << index << ' ';
					mapping[index]--;
					size--;
				}
		}

		cout << endl;
	}
}