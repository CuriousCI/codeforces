#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string stones, instructions;
	cin >> stones >> instructions;
	uint64_t position = 0;

	for (auto instruction : instructions)
		if (stones[position] == instruction)
			position++;

	cout << position + 1;
}