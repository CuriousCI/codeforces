#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t size, number;
	map<uint16_t, uint16_t> numbers;

	cin >> size;
	uint16_t pockets = 0;
	while (size--)
	{
		cin >> number;
		numbers[number]++;
		pockets = max(pockets, numbers[number]);
	}

	cout << pockets;
}