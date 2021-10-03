#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	string sequence;

	cin >> cases;
	while (cases--)
	{
		cin >> sequence;
		uint32_t parenthesses = 0, brackets = 0, rbs = 0;
		for (auto letter : sequence)
			switch (letter)
			{
			case '(':
				parenthesses++;
				break;
			case ')':
				if (parenthesses)
				{
					parenthesses--;
					rbs++;
				}
				break;
			case '[':
				brackets++;
				break;
			case ']':
				if (brackets)
				{
					brackets--;
					rbs++;
				}
				break;
			}
		cout << rbs << endl;
	}
}