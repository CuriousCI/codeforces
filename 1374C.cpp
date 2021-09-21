#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, length;
	cin >> cases;

	string brackets;
	while (cases--)
	{
		cin >> length >> brackets;
		uint16_t result = 0, open = 0;

		for (auto bracket : brackets)
			switch (bracket)
			{
			case '(':
				open++;
				break;

			case ')':
				if (open)
					open--;
				else
					result++;
				break;
			}

		cout << result << endl;
	}
}