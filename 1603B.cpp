#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t cases, x, y;

	cin >> cases;
	while (cases--)
	{
		cin >> x >> y;
		if (x == y)
			cout << x;
		else if (x > y)
			cout << x + y;
		else
			cout << y - y % x / 2;
		cout << endl;
	}
}