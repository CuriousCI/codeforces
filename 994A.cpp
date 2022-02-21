#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t sequence_length, fingerprints_count;
	cin >> sequence_length >> fingerprints_count;

	vector<uint16_t> sequence(sequence_length);
	for (auto &number : sequence)
		cin >> number;

	vector<bool> fingerprints(10, false);
	uint16_t fingerprint;
	while (fingerprints_count--)
	{
		cin >> fingerprint;
		fingerprints[fingerprint] = true;
	}

	for (auto number : sequence)
		if (fingerprints[number])
			cout << number << ' ';
}