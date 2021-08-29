#include <iostream>
#include <cstdint>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size, number;
	cin >> cases;

	while (cases--)
	{
		cin >> size;
		uint16_t odd = 0, even = 0;
		while (size--)
		{
			cin >> number;
			if ((number & 1) == 0)
				even++;
			else
				odd++;
		}
		size = odd + even;

		cout << ((odd > 0 && even > 0) || (size == odd && size & 1 == 1) ? "YES" : "NO") << endl;
	}
}