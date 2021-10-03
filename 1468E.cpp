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

	cin >> cases;
	while (cases--)
	{
		vector<uint16_t> lengths(4);
		for (auto &length : lengths)
			cin >> length;
		sort(lengths.begin(), lengths.end());
		cout << lengths.front() * lengths[2] << endl;
	}
}