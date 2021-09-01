#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint64_t rows, columns, number, row, column;
	cin >> cases;

	while (cases--)
	{
		cin >> rows >> columns >> number;
		row = ((number - 1) % rows) + 1;
		column = ceil((double)number / (double)rows);

		cout << (row - 1) * columns + column << endl;
	}
}