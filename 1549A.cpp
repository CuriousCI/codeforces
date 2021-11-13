#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t prime;

	cin >> cases;
	while (cases--)
	{
		cin >> prime;
		cout << 2 << ' ' << prime - 1 << endl;
	}
}