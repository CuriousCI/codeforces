#include <iostream>
#include <set>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases;
	cin >> cases;

	while (cases--)
	{
		vector<uint64_t>
			numbers(7),
			alpha;
		for (auto &number : numbers)
			cin >> number;

		alpha.push_back(numbers.front());
		auto difference = numbers.back() - numbers.front();
		for (auto first = 1; first < 5 && alpha.size() != 3; first++)
			for (auto second = 1; second < 5; second++)
				if (numbers[first] + numbers[second] == difference)
				{
					alpha.push_back(numbers[first]);
					alpha.push_back(numbers[second]);
					break;
				}

		for (auto number : alpha)
			cout << number << ' ';
		cout << endl;
	}
}