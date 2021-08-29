#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	switch (cases)
	{
	case 3:
	case 5:
		cout << 1;
		break;
	case 1:
	case 4:
		cout << 2;
		break;
	default:
		cout << 3;
		break;
	}
}