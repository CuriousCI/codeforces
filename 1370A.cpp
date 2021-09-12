#include <iostream>
#include <numeric>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t length;
	cin >> cases;

	while (cases--)
	{
		cin >> length;
		if (length <= 3)
			cout << 1;
		else if (length & 1)
			cout << (length - 1) / 2;
		else
			cout << length / 2;
		cout << endl;
	}
}