#include <iostream>
#include <map>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t length, max_frequency = 0;
	string genome;

	cin >> length >> genome;

	map<char, uint32_t> frequency = {
		{'A', 0},
		{'G', 0},
		{'C', 0},
		{'T', 0},
	};

	for (auto nucleotide : genome)
	{
		frequency[nucleotide]++;
		if (nucleotide != '?')
			max_frequency = max({
				frequency[nucleotide],
				max_frequency,
			});
	}

	if (frequency['?'] == length)
		max_frequency = 1;

	string missing;
	for (auto nucleotide : frequency)
		if (nucleotide.first != '?')
			for (auto _ = nucleotide.second; _ < max_frequency; _++)
				missing += nucleotide.first;

	while (missing.length() < frequency['?'])
		for (auto nucleotide : string("AGCT"))
			missing += nucleotide;

	if (missing.length() != frequency['?'])
		cout << "===";
	else
	{
		auto index = 0;
		for (auto _ = 0; _ < genome.length(); _++)
			if (genome[_] == '?')
			{
				genome[_] = missing[index];
				index++;
			}

		cout << genome;
	}
}