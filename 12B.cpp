#include <iostream>
#include <ranges>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string
		quetion,
		answer,
		solution;

	cin >> quetion >> answer;

	solution = quetion;
	ranges::sort(solution);

	uint16_t leading_zeros = 0;
	while (solution[leading_zeros] == '0' && leading_zeros < quetion.length())
		leading_zeros++;

	if (leading_zeros && quetion.length() != 1)
	{
		auto swap = solution[leading_zeros];
		solution[leading_zeros] = solution.front();
		solution.front() = swap;
	}

	cout << (solution == answer ? "OK" : "WRONG_ANSWER");
}