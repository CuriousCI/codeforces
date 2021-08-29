#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t sticks;
	cin >> cases;
	while (cases--)
	{
		cin >> sticks;
		cout << (sticks - (sticks % 2)) / 2 + (sticks % 2) << endl;
	}
}