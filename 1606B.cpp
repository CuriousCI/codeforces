#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases;
	uint64_t computers, cables;

	cin >> cases;
	while (cases--)
	{
		cin >> computers >> cables;
		computers--;
		uint64_t index = 0, result = 0;
		while (computers && ((uint64_t)(1) << index) <= cables)
		{
			result++;
			computers -= min(((uint64_t)(1) << index), computers);
			index++;
		}

		result += (computers + cables - 1) / cables;
		cout << result << endl;
	}
}