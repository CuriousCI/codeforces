#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length, operations;
	string operand;
	cin >> length >> operations >> operand;
	while (operations--)
	{
		uint16_t left, right;
		char from, to;
		cin >> left >> right >> from >> to;
		for (auto position = left - 1; position < right; position++)
			if (operand[position] == from)
				operand[position] = to;
	}

	cout << operand;
}