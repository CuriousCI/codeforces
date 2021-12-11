#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases;
	int64_t position, difference;
	cin >> cases;
	while (cases--)
	{
		cin >> position >> difference;
		if (position < difference)
			cout << difference - position;
		else
			cout << ((position & 1) == (difference & 1) ? 0 : 1);

		cout << endl;
	}
}