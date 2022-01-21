#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string input;
	getline(cin, input);

	uint16_t addresses_count;
	cin >> addresses_count;

	string optimal, address;
	cin >> address;
	optimal = address;

	while (--addresses_count)
	{
		cin >> address;
		if (address.substr(0, input.length()) == input && address < optimal)
			optimal = address;
	}

	if (optimal.substr(0, input.length()) != input)
		optimal = input;

	cout << optimal;
}