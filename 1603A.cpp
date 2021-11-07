#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<uint64_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;
	}
}