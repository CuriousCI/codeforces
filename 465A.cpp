#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t length;
	string binary;
	cin >> length >> binary;

	auto changed = 0;
	for (auto bit : binary)
	{
		changed++;
		if (bit == '0')
			break;
	}

	cout << changed;
}