#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t length;
	string cards;

	cin >> length >> cards;

	map<char, uint64_t> frequency;
	for (auto card : cards)
		frequency[card]++;

	auto ones = min({frequency['o'], frequency['n'], frequency['e']});
	frequency['o'] -= ones;
	frequency['n'] -= ones;
	frequency['e'] -= ones;

	auto zeros = min({frequency['z'], frequency['e'], frequency['r'], frequency['o']});
	for (auto _ = 0; _ < ones; _++)
		cout << 1 << ' ';
	for (auto _ = 0; _ < zeros; _++)
		cout << 0 << ' ';
}