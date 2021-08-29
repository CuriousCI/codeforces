#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t rows, columns;
	cin >> rows >> columns;

	bool is_left = false;

	while (rows--)
	{
		if ((rows & 1) == 0)
			for (uint32_t _ = 0; _ < columns; _++)
				cout << '#';
		else
		{
			for (uint32_t cell = 0; cell < columns; cell++)
				if ((is_left && cell == 0) || (!is_left && cell == columns - 1))
					cout
						<< '#';
				else
					cout << '.';

			is_left = !is_left;
		}
		cout << endl;
	}
}