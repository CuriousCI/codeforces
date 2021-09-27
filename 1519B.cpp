#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

uint16_t path(uint16_t x, uint16_t y, uint16_t rows, uint16_t columns)
{
	if (x < columns)
		return y + path(x + 1, y, rows, columns);
	if (y < rows)
		return x + path(x, y + 1, rows, columns);
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, rows, columns, cost;

	cin >> cases;
	while (cases--)
	{
		cin >> rows >> columns >> cost;
		cout << (path(1, 1, rows, columns) == cost ? "YES" : "NO") << endl;
	}
}