#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases, participants;
	cin >> cases;

	while (cases--)
	{
		cin >> participants;
		vector<uint32_t> numbers(participants);
		for (auto &number : numbers)
			cin >> number;
		vector<uint32_t> copy(numbers);
		sort(numbers.begin(), numbers.end());
		int32_t result = -1;
		for (size_t index = 0; index < participants; index++)
		{
			if (index == 0 && numbers[index + 1] != numbers[index])
			{
				result = numbers[index];
				break;
			}
			else if (index == participants - 1 && numbers[index] != numbers[index - 1])
			{
				result = numbers[index];
				break;
			}
			else if (numbers[index] != numbers[index - 1] && numbers[index] != numbers[index + 1])
			{
				result = numbers[index];
				break;
			}
		}

		if (result != -1)
		{
			for (size_t index = 0; index < participants; index++)
				if (copy[index] == result)
				{
					result = index + 1;
					break;
				}
		}

		cout << result << endl;
	}
}