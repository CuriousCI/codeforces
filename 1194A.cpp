#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t size, position;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> position;
		cout << position * 2 << endl;
	}
}