#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, constant, longest = 0;
	string sequence;

	cin >> length >> constant >> sequence;
	vector<uint32_t> frequencies(constant, 0);

	for (auto letter : sequence)
		if (letter - 'A' < constant)
			frequencies[letter - 'A']++;

	uint32_t result = UINT32_MAX;
	for (auto frequency : frequencies)
		result = min(result, frequency);

	cout << result * constant;
}