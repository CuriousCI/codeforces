#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, peaks;

	cin >> cases;
	while (cases--)
	{
		cin >> size >> peaks;
		if ((size - 2) < (peaks - 1) * 2 + 1)
			cout << -1;
		else
		{
		}

		cout << endl;
	}
}