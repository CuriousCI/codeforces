#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t ones;
	string binary;
	cin >> ones >> binary;

	vector<uint64_t> positions;
	for (auto digit = 0; digit < binary.length(); digit++)
		if (binary[digit] == '1')
			positions.push_back(digit);
}