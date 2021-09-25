#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, cutoff;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> cutoff;
		vector<uint16_t> numbers(size);
		for (auto &number : numbers)
			cin >> number;

		sort(numbers.begin(), numbers.end());
		cout << (numbers.front() + numbers[1] <= cutoff || numbers.back() <= cutoff ? "YES" : "NO") << endl;
	}
}