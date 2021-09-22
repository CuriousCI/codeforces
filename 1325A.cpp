#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t number;
	cin >> cases;

	while (cases--)
	{
		cin >> number;
		cout << 1 << ' ' << number - 1 << endl;
	}
}