#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;

	cin >> cases;
	while (cases--)
	{
		uint64_t rows, columns;
		cin >> rows >> columns;

		cout << (rows == 1 || columns == 1 || (rows == 2 && columns == 2) ? "YES" : "NO") << endl;
	}
}