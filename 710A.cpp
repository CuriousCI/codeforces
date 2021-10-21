#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	char column, row;
	cin >> column >> row;

	if ((row == '1' && column == 'a') ||
		(row == '1' && column == 'h') ||
		(row == '8' && column == 'a') ||
		(row == '8' && column == 'h'))
		cout << 3;
	else if (row == '1' ||
			 row == '8' ||
			 column == 'a' ||
			 column == 'h')
		cout << 5;
	else
		cout << 8;
}