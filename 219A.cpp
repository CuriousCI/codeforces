#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t type;
	string orignial;
	cin >> type >> orignial;

	map<char, uint64_t> frequency;
	for (auto character : orignial)
		frequency[character]++;

	bool is_good = true;
	for (auto character : frequency)
		if (character.second % type)
		{
			is_good = false;
			break;
		}

	if (!is_good)
		cout << -1;
	else
	{
		string base;
		for (auto character : frequency)
			for (auto _ = 0; _ < character.second / type; _++)
				base += character.first;

		for (auto _ = 0; _ < type; _++)
			cout << base;
	}
}