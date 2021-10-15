#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	uint16_t number;

	cin >> size;
	vector<uint32_t> frequency(3, 0);
	while (size--)
	{
		cin >> number;
		frequency[number - 1]++;
	}

	cout << min({
		frequency[0] + frequency[1],
		frequency[0] + frequency[2],
		frequency[1] + frequency[2],
	});
}