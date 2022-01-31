#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		uint16_t width;
		string dominos;

		cin >> width >> dominos;
		for (auto &domino : dominos)
		{
			if (domino == 'U')
				domino = 'D';
			else if (domino == 'D')
				domino = 'U';
		}

		cout << dominos << endl;
	}
}