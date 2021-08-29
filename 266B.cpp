#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;

	string c;
	cin >> c;

	for (int i = 0; i < t; i++)
		for (int x = 0; x < n - 1; x++)
			if (c[x] == 'B' && c[x + 1] == 'G')
			{
				c[x] = 'G';
				c[x + 1] = 'B';
				x++;
			}

	cout << c << endl;
}