#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases, chars;
	string sequence;
	cin >> cases;

	while (cases--)
	{
		cin >> chars >> sequence;
		uint32_t t = 0, m = 0;
		bool found = true;
		for (auto chr : sequence)
		{
			if (chr == 'T')
				t++;
			else
				m++;
			if (m > t)
			{
				found = false;
				break;
			}
		}

		cout << (found && t == m * 2 && sequence[chars - 1] != 'M' ? "YES" : "NO") << endl;
	}
}