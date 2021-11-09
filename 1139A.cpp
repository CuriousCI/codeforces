#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t length;
	string number;

	cin >> length >> number;

	auto result = 0, index = 1;
	for (auto digit : number)
	{
		if ((uint16_t)(digit - '0') % 2 == 0)
			result += index;
		index++;
	}

	cout << result;
}