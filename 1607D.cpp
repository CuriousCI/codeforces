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
		int64_t size;
		cin >> size;
		vector<int64_t> numbers(size);
		string colors;

		for (auto &number : numbers)
			cin >> number;
		cin >> colors;
	}
}