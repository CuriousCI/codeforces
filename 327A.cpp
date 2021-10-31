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

	auto result = 0;
	for (auto value : values)
		result += value;
	auto base = result;

	if (size == 1)
		cout << 1 - values.front();
	else if (size == result)
		cout << size - 1;
	else
	{

		for (auto length = 1; length <= size; length++)
		{
			auto temp = base;
			for (auto index = 0; index < size; index++)
			{
				if (index < length)
					temp += (values[index] ? -1 : 1);
				else
				{
					temp += (values[index] ? -1 : 1);
					temp -= (values[index - length] ? -1 : 1);
				}
				result = max(result, temp);
			}
		}
		cout << result;
	}
}