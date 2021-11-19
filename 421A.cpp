#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t apples_size, arthur, alexander, type;
	cin >> apples_size >> arthur >> alexander;
	vector<uint16_t> types(apples_size + 1, 0);

	while (arthur--)
	{
		cin >> type;
		types[type]++;
	}

	while (alexander--)
	{
		cin >> type;
		types[type] = 2;
	}

	for (auto apple = 1; apple <= apples_size; apple++)
		cout << types[apple] << ' ';
}