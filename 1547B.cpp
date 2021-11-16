#include <iostream>
#include <deque>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, left = UINT16_MAX, right = UINT16_MAX;
	string chars;
	char current = ';';

	cin >> cases;
	while (cases--)
	{
		cin >> chars;
		for (auto index = 0; index < chars.size(); index++)
			if (chars[index] == 'a')
			{
				left = right = index;
				current = 'a';
				break;
			}

		bool valid = true;
		while (right - left < chars.size() - 1 && valid)
		{
			if (left > 0)
			{
				if (chars[left - 1] == current + 1)
					left--;
				else
					valid = false;
			}
			else if (right < chars.size() - 1)
			{
				if (chars[right + 1] == current + 1)
					right++;
				else
					valid = false;
			}

			current++;
		}

		cout << (valid ? "YES" : "NO") << endl;
	}
}