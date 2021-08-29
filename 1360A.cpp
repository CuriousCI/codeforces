#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, a, b;
	cin >> cases;

	while (cases--)
	{
		cin >> a >> b;
		if (b > a)
		{
			uint16_t temp = a;
			a = b;
			b = temp;
		}
		uint16_t side = max(a, (uint16_t)(b * 2));
		cout << side * side << endl;
	}
}