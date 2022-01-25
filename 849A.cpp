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

	vector<uint16_t> numbers(size);
	for (auto &number : numbers)
		cin >> number;

	cout << ((size & 1) && (numbers.front() & 1) && (numbers.back() & 1) ? "YES" : "NO");
}