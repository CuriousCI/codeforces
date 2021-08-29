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
	cin >> size;

	vector<uint32_t> numbers(size), increasing, decreasing;
	for (auto &number : numbers)
		cin >> number;

	sort(numbers.begin(), numbers.end());
	for (auto number : numbers)
		if (!increasing.size() || increasing.back() != number)
			increasing.push_back(number);
		else if (!decreasing.size() || decreasing.back() != number)
			decreasing.push_back(number);
		else
		{
			cout << "NO";
			return 0;
		}

	cout << "YES" << endl;

	reverse(increasing.begin(), increasing.end());

	cout << decreasing.size() << endl;
	for (auto number : decreasing)
		cout << number << ' ';
	cout << endl;

	cout << increasing.size() << endl;
	for (auto number : increasing)
		cout << number << ' ';
	cout << endl;
}