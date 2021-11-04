#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t one, two, three;

	cin >> cases;
	while (cases--)
	{
		cin >> one >> two >> three;
		cout << (one + two * 2 + three * 3) % 2 << endl;
	}
}