#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	double size;

	cin >> cases;
	while (cases--)
	{
		cin >> size;
		vector<double> numbers(size);
		for (auto &number : numbers)
			cin >> number;
		sort(numbers.begin(), numbers.end());

		double average = numbers.front(), previous = numbers.front();
		for (auto number : numbers)
			average += number;
		average /= size;
		uint64_t count = 0;
		for (auto number : numbers)
			if (number > average)
				count++;
		cout << count << endl;
	}
}