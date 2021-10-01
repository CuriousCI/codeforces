#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, biggest = 0;
	cin >> cases;

	vector<uint64_t> numbers(cases);
	for (auto &number : numbers)
	{
		cin >> number;
		biggest = max(biggest, number);
	}

	vector<uint64_t> factorial(biggest * 2 + 10);
	factorial[0] = 1;
	for (auto number = 1; number < biggest * 2 + 10; number++)
	{
		factorial[number] = number * factorial[number - 1];
		// factorial[number] %= 1000000007;
	}

	for (auto number : numbers)
		cout << (factorial[number * 2] / 2) << endl;
}