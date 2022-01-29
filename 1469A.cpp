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
		string sequence;
		cin >> sequence;

		uint16_t brackets = 0;
		bool is_rbs = true;
		for (auto bracket : sequence)
		{
			if (!is_rbs)
				break;

			switch (bracket)
			{
			case '(':
				brackets++;
				break;

			case ')':
				if (brackets)
					brackets--;
				else
					is_rbs = false;
				break;

			default:
				if (brackets)
					brackets--;
				else
					brackets++;
				break;
			}
		}

		cout << (brackets || !is_rbs ? "NO" : "YES") << endl;
	}
}