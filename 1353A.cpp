#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases;
	uint64_t size, sum;
	cin >> cases;

	while (cases--)
	{
		cin >> size >> sum;

		if (size == 1)
			cout << 0;
		else
			cout << min(size - 1, (uint64_t)2) * sum;

		cout << endl;
	}
}