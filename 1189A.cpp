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

	uint16_t zeros = 0, ones = 0;
	for (auto digit : binary)
		if (digit == '0')
			zeros++;
		else
			ones++;

	if (zeros != ones)
		cout << 1 << endl
			 << binary;
	else
		cout << 2 << endl
			 << binary.substr(0, binary.length() - 1) << ' '
			 << binary.back();
}