#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t numerator, denominator;

	cin >> cases;
	while (cases--)
	{
		cin >> numerator >> denominator;
		cout << -1 * numerator * numerator << ' ' << denominator * denominator << endl;
	}
}