#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, type;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint16_t> reviews(4, 0);
		while (size--)
		{
			cin >> type;
			reviews[type]++;
		}

		cout << reviews[1] + reviews[3] << endl;
	}
}