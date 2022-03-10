#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t tests_number;
	cin >> tests_number;

	vector<uint32_t> test_numbers(tests_number);
	for (auto &test : test_numbers)
		cin >> test;

	ranges::sort(test_numbers);
	auto start = 1;
	for (auto test = 0; test < tests_number && test_numbers[test] == start; test++)
		start++;

	cout << start;
}