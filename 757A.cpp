#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string letters;
	cin >> letters;

	map<char, uint32_t> frequency;
	for (auto letter : letters)
		frequency[letter]++;

	uint32_t min_bulbasaurs = UINT32_MAX;
	for (auto letter : string("Blbsr"))
		min_bulbasaurs = min(frequency[letter], min_bulbasaurs);

	min_bulbasaurs = min({
		min_bulbasaurs,
		(frequency['u'] - (frequency['u'] & 1)) / 2,
		(frequency['a'] - (frequency['a'] & 1)) / 2,
	});

	cout << min_bulbasaurs;
}