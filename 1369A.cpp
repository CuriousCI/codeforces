#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t polygons;
	uint32_t polygon;

	cin >> polygons;
	while (polygons--)
	{
		cin >> polygon;
		cout << (polygon % 4 == 0 ? "YES" : "NO") << endl;
	}
}