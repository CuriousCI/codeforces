#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t rows, columns;
	cin >> rows >> columns;
	char color;

	while (rows--)
		while (columns--)
		{
			cin >> color;
			if (color != 'B' && color != 'W' && color != 'G')
			{
				cout << "#Color";
				return 0;
			}
		}

	cout << "#Black&White";
}