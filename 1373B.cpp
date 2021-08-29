#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	string binary;

	while (cases--)
	{
		cin >> binary;
		uint32_t bits[2] = {0};
		for (auto bit : binary)
			bits[bit - '0']++;
		uint32_t pairs = min(bits[0], bits[1]);
		cout << (pairs & 1 ? "DA" : "NET") << endl;
	}
}