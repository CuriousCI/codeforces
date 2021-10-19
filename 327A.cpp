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

	vector<uint16_t> values(size);
	for (auto &value : values)
		cin >> value;
}